import sqlalchemy
from flask_login import UserMixin

from ..settings.session_db import SqlAlchemyBase


class User(SqlAlchemyBase, UserMixin):
    __tablename__ = 'users'

    id = sqlalchemy.Column(
        sqlalchemy.Integer,
        primary_key=True,
        autoincrement=True
    )
    name = sqlalchemy.Column(
        sqlalchemy.String,
        nullable=True
    )
    email = sqlalchemy.Column(
        sqlalchemy.String,
        index=True,
        unique=True,
        nullable=True
    )
    password = sqlalchemy.Column(
        sqlalchemy.String,
        nullable=True
    )
