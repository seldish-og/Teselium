from tabnanny import check

from click import password_option
from model.all_models.auth_models import User
from model.settings import session_db
from model.all_models import auth_models


class LoginController:
    def __init__(self, email, password) -> None:
        print("            DATA FROM USER - {} {} ".format(email, password))
        self.input_email = email
        self.input_password = password

        self.db_email = ""
        self.db_password = ""

    def get_data_from_db(self):
        db_sess = session_db.create_session()
        user = db_sess.query(User).filter(
            User.email == self.input_email).first()
        print("            SEARCH RESULT - {} ".format(user))
        return user

    def check_password(self, db_email):
        if self.input_password == db_email:
            return True
        return False

    def wrapper(self):
        user = self.get_data_from_db()
        if user:
            password_correct = self.check_password(user.password)
            if password_correct:
                print("            USER AND password_correct True ")
                return {"comparrison_result": True, "user": user}
            else:
                return {"comparrison_result": False}
        return {"comparrison_result": False}


class SignUpController:
    def __init__(self) -> None:
        pass

    def check_username(self):
        pass

    def check_email(self):
        pass

    def check_password(self):
        pass
