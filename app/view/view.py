from flask import Flask, render_template
from werkzeug.exceptions import HTTPException

app = Flask(__name__, template_folder='../templates',
            static_folder='../static')


@app.errorhandler(404)
def handle_exception(e):
    return render_template("error_page.html", e=e), 500


@app.route("/")
def index():
    return render_template("main_templates/main_page.html", title="Teselium")


@app.route('/auth')
def auth():
    return render_template("auth_page.html", title="Sign in")


@app.route("/creators")
def creators():
    return render_template("creators_template/creators_page.html", title="Creators")


@app.route("/banks")
def banks():
    return render_template("banks_template/banks_page.html", title="Banks")


@app.route("/debit-card")
def cards():
    return render_template("cards_templates/debit_cards_page.html", title="Debit cards")


@app.route("/credit-card/<args>")
def credit_cards(args):
    print(args)
    return "credit cards"
