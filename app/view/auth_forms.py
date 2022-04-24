from flask_wtf import FlaskForm
from wtforms import StringField, PasswordField, SubmitField
from wtforms.validators import DataRequired


class LoginForm(FlaskForm):
    email = StringField("email", validators=[DataRequired()])
    password = PasswordField('password', validators=[DataRequired()])
    submit = SubmitField('submit')


class SignUpForm(FlaskForm):
    username = StringField('Namee', validators=[DataRequired()])
    email = StringField("Emaill", validators=[DataRequired()])
    password = PasswordField('Passwordd', validators=[DataRequired()])
    submitt = SubmitField('Submitt')
