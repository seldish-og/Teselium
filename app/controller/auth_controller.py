from click import password_option


class LoginController:
    def __init__(self, email, password) -> None:
        print(email, password)
        self.input_email = email
        self.input_password = password

        self.db_email = ""
        self.db_password = ""

    def get_data_from_db(self):
        pass

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
            # print("TTTTTRRRRRRRRRRUUUUEEEEEEEE")
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
