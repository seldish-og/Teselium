import json
from flask import Flask, redirect, render_template, request
from .auth_forms import LoginForm, SignUpForm
from werkzeug.exceptions import HTTPException

app = Flask(__name__, template_folder='../templates',
            static_folder='../static')
app.config['SECRET_KEY'] = '8222584161030350316'


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
        print("logged in")
        print(login_form.email.data)
        print(login_form.password.data)
        return redirect('/')

    return render_template("other_templates/auth_page.html", sign_up_form=sign_up_form, login_form=login_form, title="Sign In")


@app.route("/creators")
def creators():
    return render_template("creators_template/creators_page.html", title="Creators")


@app.route("/banks")
def banks():
    return render_template("banks_template/banks_page.html", title="Banks")


@app.route("/debit-card")
def cards():
    return render_template("cards_templates/debit_cards_page.html", title="Debit cards")


@app.route("/credit-card", methods=["GET"])
def credit_cards():
    print("sssssssssss")
    # generate_cards(argument)
    return render_template("cards_templates/credit_cards_page.html", title="Credit cards")


@ app.route("/credit-card", methods=["POST"])
def credit_post():
    data = request.get_json()
    print(data)

    return "200"
