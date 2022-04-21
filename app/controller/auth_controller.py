from pickle import TRUE
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
    def __init__(self, data) -> None:
        print(data)
        self.input_username = data["name"]
        self.input_email = data["email"]
        self.input_password = data["password"]
        print(self.input_username,
              self.input_email, self.input_password)
        self.db_sess = session_db.create_session()

    def check_username(self):
        if self.input_username != "":
            return True
        return False

    def check_email(self):
        if (self.input_email != "") and ("@" in self.input_email):
            return True
        return False

    def check_password(self):
        if len(self.input_password) >= 8:
            return True
        return False

    def add_user_db(self):
        check_usr = self.check_username()
        check_em = self.check_email()
        check_pswd = self.check_password()

        if check_usr and check_em and check_pswd:
            user = User()
            user.name = self.input_username
            user.email = self.input_email
            user.password = self.input_password

            self.db_sess.add(user)
            self.db_sess.commit()
            return {"registr_result": True, "user": user}
        return {"registr_result": False}
