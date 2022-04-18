from flask_wtf import FlaskForm
from wtforms import StringField, IntegerField, SubmitField
from wtforms.validators import DataRequired


class CreditFilterForm(FlaskForm):
    annuel_fee_min = StringField("annuel_fee_min", validators=[DataRequired()])
    annuel_fee_max = StringField("annuel_fee_max", validators=[DataRequired()])

    credit_score_min = IntegerField(
        "credit_score_min", validators=[DataRequired()])
    credit_score_max = IntegerField(
        "credit_score_max", validators=[DataRequired()])

    apr_min = IntegerField("apr_min", validators=[DataRequired()])
    apr_max = IntegerField("apr_max", validators=[DataRequired()])

    cashback_fee_min = IntegerField(
        "cashback_fee_min", validators=[DataRequired()])
    cashback_fee_max = IntegerField(
        "cashback_fee_max", validators=[DataRequired()])

    '''good thing for banks'''
    # names = SelectMultipleField(
    #     'Names',
    #     validators=[Optional()],
    #     coerce=int,
    #     widget=ListWidget(html_tag='ul', prefix_label=False),
    #     option_widget=CheckboxInput())
    '''/good thing for banks'''

    submit = SubmitField('Submit')
