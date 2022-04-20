# from view import app
from api import generate_key_api
from controller import auth_controller, cards_controller
from model import session_db
from flask import Flask, redirect, render_template, request
from view.auth_forms import LoginForm, SignUpForm
# from werkzeug.exceptions import HTTPException

app = Flask(__name__)
try:
    secret_key = generate_key_api.generate_key()
except Exception as ex:
    secret_key = generate_key_api.generate_default_key()


app.config['SECRET_KEY'] = secret_key

session_db.global_init("model/sqlite_db/test.db")


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
        print("signed up")
        print(sign_up_form.username.data)
        print(sign_up_form.email.data)
        print(sign_up_form.password.data)
        return redirect('/')

    if login_form.validate_on_submit():
        input_email = login_form.email.data
        input_password = login_form.password.data
        print(input_email)
        print(input_password)
        login_controller = auth_controller.LoginController(
            input_email, input_password)
        comparrison_result = login_controller.wrapper()
        print(comparrison_result)

        if comparrison_result:
            print("logged in")
            return redirect('/')
        else:
            print("not looged in {}".format(comparrison_result))
            return redirect('/auth')

    return render_template("other_templates/auth_page.html", sign_up_form=sign_up_form, login_form=login_form, title="Sign In")


@ app.route("/creators")
def creators():
    return render_template("creators_template/creators_page.html", title="Creators")


@ app.route("/banks")
def banks():
    return render_template("banks_template/banks_page.html", title="Banks")


@ app.route("/debit-card")
def cards():
    return render_template("cards_templates/debit_cards_page.html", title="Debit cards")


@ app.route("/credit-card", methods=["GET"])
def credit_cards():
    filter_value = request.args.get("filter_value")
    if filter_value:
        print(filter_value)
    else:
        print("defff")
    # generate_cards(argument)
    return render_template("cards_templates/credit_cards_page.html", title="Credit cards")


@ app.route("/credit-card", methods=["POST"])
def credit_post():
    data = request.get_json()
    print(data)

    return redirect("/credit-card?filter_value=fuck")
    # return render_template("cards_templates/credit_cards_page.html", title="Credit cards")


if __name__ == '__main__':
    app.run(port=8080, host='127.0.0.1')
