import sqlalchemy
from ..settings.session_db import SqlAlchemyBase


class LowestFee(SqlAlchemyBase):
    __tablename__ = 'lowest_fee'

    id = sqlalchemy.Column(
        sqlalchemy.Integer,
        primary_key=True,
        autoincrement=True
    )
    card_name = sqlalchemy.Column(
        sqlalchemy.String,
        nullable=True
    )
    cashback = sqlalchemy.Column(
        sqlalchemy.Integer,
        nullable=True
    )
    annual_fee = sqlalchemy.Column(
        sqlalchemy.Integer,
        nullable=True
    )
    credit_score = sqlalchemy.Column(
        sqlalchemy.Integer,
        nullable=True
    )
    network = sqlalchemy.Column(
        sqlalchemy.String,
        nullable=True
    )
    regular_apr = sqlalchemy.Column(
        sqlalchemy.String,
        nullable=True
    )
    bank_name = sqlalchemy.Column(
        sqlalchemy.String,
        nullable=True
    )
    img_path = sqlalchemy.Column(
        sqlalchemy.String,
        unique=True,
        nullable=True
    )


class BestCashBack(SqlAlchemyBase):
    __tablename__ = 'best_cash_back'

    id = sqlalchemy.Column(
        sqlalchemy.Integer,
        primary_key=True,
        autoincrement=True
    )
    card_name = sqlalchemy.Column(
        sqlalchemy.String,
        nullable=True
    )
    cashback = sqlalchemy.Column(
        sqlalchemy.Integer,
        nullable=True
    )
    annual_fee = sqlalchemy.Column(
        sqlalchemy.Integer,
        nullable=True
    )
    credit_score = sqlalchemy.Column(
        sqlalchemy.Integer,
        nullable=True
    )
    network = sqlalchemy.Column(
        sqlalchemy.String,
        nullable=True
    )
    regular_apr = sqlalchemy.Column(
        sqlalchemy.String,
        nullable=True
    )
    bank_name = sqlalchemy.Column(
        sqlalchemy.String,
        nullable=True
    )
    img_path = sqlalchemy.Column(
        sqlalchemy.String,
        unique=True,
        nullable=True
    )


class LowestApr(SqlAlchemyBase):
    __tablename__ = 'lowest_apr'

    id = sqlalchemy.Column(
        sqlalchemy.Integer,
        primary_key=True,
        autoincrement=True
    )
    card_name = sqlalchemy.Column(
        sqlalchemy.String,
        nullable=True
    )
    cashback = sqlalchemy.Column(
        sqlalchemy.Integer,
        nullable=True
    )
    annual_fee = sqlalchemy.Column(
        sqlalchemy.Integer,
        nullable=True
    )
    credit_score = sqlalchemy.Column(
        sqlalchemy.Integer,
        nullable=True
    )
    network = sqlalchemy.Column(
        sqlalchemy.String,
        nullable=True
    )
    regular_apr = sqlalchemy.Column(
        sqlalchemy.String,
        nullable=True
    )
    bank_name = sqlalchemy.Column(
        sqlalchemy.String,
        nullable=True
    )
    img_path = sqlalchemy.Column(
        sqlalchemy.String,
        unique=True,
        nullable=True
    )
