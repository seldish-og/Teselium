from model.settings import session_db
from model.all_models import auth_models


class LoginController:
    def __init__(self, email, password) -> None:
        print("            {} {} - DATA FROM USER".format(email, password))
        self.input_email = email
        self.input_password = password

        self.db_email = ""
        self.db_password = ""

    def get_data_from_db(self):
        auth = auth_models.Auth_model()
        db_sess = session_db.create_session()
        dd = db_sess.query(auth_models.Auth_model).first()
        print("            {} - DATA FROM DB".format(dd.name))

    def compare_email(self):
        if self.input_email == self.db_email:
            return True
        else:
            return False

    def compare_password(self):
        if self.input_password == self.db_password:
            return True
        else:
            return False

    def wrapper(self):
        email_comparrison = self.compare_email()
        password_comparrison = self.compare_password()

        if email_comparrison and password_comparrison:
            return True
        else:
            return False


class SignUpController:
    def __init__(self) -> None:
        pass

    def check_username(self):
        pass

    def check_email(self):
        pass

    def check_password(self):
        pass
