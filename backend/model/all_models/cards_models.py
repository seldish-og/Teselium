import sqlalchemy

from ..settings.session_db import SqlAlchemyBase


class CreditCards(SqlAlchemyBase):
    __tablename__ = "credit_cards"

    id = sqlalchemy.Column(sqlalchemy.Integer, primary_key=True, autoincrement=True)
    card_name = sqlalchemy.Column(sqlalchemy.String, nullable=True)
    cashback = sqlalchemy.Column(sqlalchemy.Integer, nullable=True)
    annual_fee = sqlalchemy.Column(sqlalchemy.Integer, nullable=True)
    credit_score = sqlalchemy.Column(sqlalchemy.Integer, nullable=True)
    network = sqlalchemy.Column(sqlalchemy.String, nullable=True)
    regular_apr = sqlalchemy.Column(sqlalchemy.String, nullable=True)
    bank_name = sqlalchemy.Column(sqlalchemy.String, nullable=True)
    img_path = sqlalchemy.Column(sqlalchemy.String, unique=True, nullable=True)
    link_to_bank = sqlalchemy.Column(sqlalchemy.String, nullable=True)


class DebitCards(SqlAlchemyBase):
    __tablename__ = "debit_cards"

    id = sqlalchemy.Column(sqlalchemy.Integer, primary_key=True, autoincrement=True)
    card_name = sqlalchemy.Column(sqlalchemy.String, nullable=True)
    cashback = sqlalchemy.Column(sqlalchemy.Integer, nullable=True)
    annual_fee = sqlalchemy.Column(sqlalchemy.Integer, nullable=True)
    network = sqlalchemy.Column(sqlalchemy.String, nullable=True)
    bank_name = sqlalchemy.Column(sqlalchemy.String, nullable=True)
    link_to_bank = sqlalchemy.Column(sqlalchemy.String, nullable=True)
    img_path = sqlalchemy.Column(sqlalchemy.String, unique=True, nullable=True)
