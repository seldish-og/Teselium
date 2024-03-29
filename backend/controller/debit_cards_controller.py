from model.all_models.cards_models import DebitCards
from model.settings import session_db


class Debit:
    def __init__(self, filter_type) -> None:
        self.filter_type = filter_type
        self.db_sess = session_db.create_session()
        print("INIT-FILTER-TYPE ", filter_type)

    def format_responce(self, db_response):
        cards_list = []
        for card in db_response:
            cards = {}
            cards["card_name"] = card.card_name
            cards["cashback"] = card.cashback
            cards["annual_fee"] = card.annual_fee
            cards["network"] = card.network
            cards["bank_name"] = card.bank_name
            cards["img_path"] = card.img_path
            cards["link_to_bank"] = card.link_to_bank
            cards_list.append(cards)
        return cards_list

    def get_default_cards_data(self):
        db_response = self.db_sess.query(DebitCards).all()
        response = self.format_responce(db_response)
        return response

    def get_banks_cards_data(self):
        bank_name = self.filter_type[5:]
        print(bank_name)

        db_response = self.db_sess.query(DebitCards).filter(
            DebitCards.bank_name == bank_name
        )

        response = self.format_responce(db_response)
        return response

    def generate_cards(self):
        cards = []
        if self.filter_type == "default":
            print("default")
            cards = self.get_default_cards_data()
        if "bank" in self.filter_type:
            print("bank_filter")
            cards = self.get_banks_cards_data()

        return cards
