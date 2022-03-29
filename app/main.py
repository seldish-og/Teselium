import re
from flask import Flask, render_template

app = Flask(__name__)


@app.route("/")
def index():
    return "main"


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
    return "credit cards"


if __name__ == '__main__':
    app.run(port=8080, host='127.0.0.1')
