import json
import ast
from api import generate_key_api
from controller import auth_controller, cards_controller
from model import session_db
from flask import Flask, redirect, render_template, request
from flask_login import LoginManager, login_user, logout_user, login_required
from model.all_models.auth_models import User
from view.auth_forms import LoginForm, SignUpForm

app = Flask(__name__)

try:
    secret_key = generate_key_api.generate_key()
except Exception as ex:
    secret_key = generate_key_api.generate_default_key()
app.config['SECRET_KEY'] = secret_key

login_manager = LoginManager()
login_manager.init_app(app)

session_db.global_init("model/sqlite_db/test.db")
# db_sess = session_db.create_session()


@login_manager.user_loader
def load_user(user_id):
    db_sess = session_db.create_session()
    return db_sess.query(User).get(user_id)


@app.errorhandler(404)
def handle_exception(e):
    return render_template("other_templates/error_page.html", e=e), 500


@app.route("/")
def index():
    return render_template("main_templates/main_page.html", title="Teselium")


@app.route('/auth', methods=['GET', 'POST'])
def auth():
    login_form = LoginForm()
    sign_up_form = SignUpForm()

    if sign_up_form.validate_on_submit():
        reg_input_username = sign_up_form.username.data
        reg_input_email = sign_up_form.email.data
        reg_input_password = sign_up_form.password.data
        data = {
            "name": reg_input_username,
            "email": reg_input_email,
            "password": reg_input_password
        }

        sign_up_controller = auth_controller.SignUpController(data)
        registr_user = sign_up_controller.add_user_db()
        if registr_user["registr_result"]:
            print("signed up")
            login_user(registr_user["user"])
            return redirect('/')
        return redirect("/auth")

    if login_form.validate_on_submit():
        input_email = login_form.email.data
        input_password = login_form.password.data

        login_controller = auth_controller.LoginController(
            input_email, input_password)

        comparrison_result = login_controller.wrapper()

        print(f"              COMPARRISON RESULT - {comparrison_result}")
        if comparrison_result["comparrison_result"]:
            print("LOGGED IN")
            login_user(comparrison_result["user"])
            return redirect('/')

        else:
            print("NOT LOGGED IN")
            return redirect('/auth')

    return render_template("other_templates/auth_page.html", sign_up_form=sign_up_form, login_form=login_form, title="Sign In")


@app.route('/logout')
@login_required
def logout():
    logout_user()
    return redirect("/")


@app.route("/creators")
def creators():
    return render_template("creators_template/creators_page.html", title="Creators")


@app.route("/banks")
def banks():
    return render_template("banks_template/banks_page.html", title="Banks")


@app.route("/debit-card")
def cards():
    return render_template("cards_templates/debit_cards_page.html", title="Debit cards")

# good cards but no perfect


@app.route("/credit-card", methods=["GET"])
def credit_cards():
    filter_type = request.args.get("filter_type")

    if not filter_type:
        filter_type = "default"

    full_filter_data = request.args.get("data")
    print(f"FULL fILTR DATA {full_filter_data}")
    if full_filter_data:
        full_filter_data = ast.literal_eval(full_filter_data)

    credit_controller = cards_controller.Credit(
        filter_type=filter_type,
        full_filter_data=full_filter_data
    )
    render_data = credit_controller.get_cards()
    print(render_data)
    return render_template("cards_templates/credit_cards_page.html", title="Credit cards", render_data=render_data)


@app.route("/credit-card", methods=["POST"])
def credit_post():
    full_filter_data = request.get_json()

    return redirect(f"/credit-card?filter_value=full_filter&data={full_filter_data}")


if __name__ == '__main__':
    app.run(port=8080, host='127.0.0.1')
