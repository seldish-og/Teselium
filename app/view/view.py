from flask import Flask, render_template
from werkzeug.exceptions import HTTPException

app = Flask(__name__, template_folder='../templates',
            static_folder='../static')


@app.errorhandler(404)
def handle_exception(e):
    return render_template("error_page.html", e=e), 500


@app.route("/")
def index():
    return render_template("main_templates/main_page.html")


@app.route('/auth')
def auth():
    return render_template("auth_page.html", title="Sign in")


@app.route("/creators")
def creators():
    return render_template("main_templates/creators_page.html")


@app.route("/banks")
def banks():
    return "banks"


@app.route("/debit-card")
def cards():
    return "debit cards"


@app.route("/credit-card/<args>")
def credit_cards(args):
    print(args)
    return "credit cards"
