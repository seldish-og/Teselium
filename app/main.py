import re
from urllib import response
from flask import Flask, render_template, url_for

app = Flask(__name__, template_folder='main_app/templates')


@app.route("/")
def index():
    return "main"


@app.route('/auth')
def auth():
    return render_template("auth_template/auth_page.html")


@app.route("/creators")
def creators():
    return render_template("templates/creators_template")


@app.route("/banks")
def banks():
    return render_template("templates/banks_template")


@app.route("/debit-card")
def cards():
    return "debit cards"


@app.route("/credit-card/<args>")
def credit_cards(args):
    print(args)
    return "credit cards"


if __name__ == '__main__':
    app.run(port=8080, host='127.0.0.1')
