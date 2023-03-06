import psycopg2


class SetUpPostgress:
    def __init__(self):
        dbname = "database"
        user = "db_user"
        password = "mypassword"
        host = "localhost"
        connection = psycopg2.connect(
            dbname=dbname, user=user, password=password, host=host
        )
        self.cursor = connection.cursor()

    def create_db():
        pass

    def fill_db():
        pass


if __name__ == "__main__":
    set_up_db = SetUpPostgress()
