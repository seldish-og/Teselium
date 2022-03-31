from flask import Flask, render_template, url_for
from werkzeug.exceptions import HTTPException

app = Flask(__name__)


@app.errorhandler(Exception)
def handle_exception(e):
    if isinstance(e, HTTPException):
        return e

    return render_template("error_page.html", e=e), 500


@app.route("/")
def index():
    return "main"


@app.route('/auth')
def auth():
    return render_template("auth_page.html")


@app.route("/creators")
def creators():
    return "creators"


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


if __name__ == '__main__':
    app.run(port=8080, host='127.0.0.1')
