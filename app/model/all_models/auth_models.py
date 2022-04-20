import sqlalchemy
from ..settings.session_db import SqlAlchemyBase


class User(SqlAlchemyBase):
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
