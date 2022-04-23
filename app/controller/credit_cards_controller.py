from model.settings import session_db
from model.all_models.cards_models import CreditCards, DebitCards
from model.all_models.fast_filters_model import LowestApr, LowestFee, BestCashBack


class Credit:
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
            cards["credit_score"] = card.credit_score
            cards["network"] = card.network
            cards["regular_apr"] = card.regular_apr
            cards["bank_name"] = card.bank_name
            cards["img_path"] = card.img_path
            cards_list.append(cards)
        return cards_list

    def get_default_cards_data(self):
        db_response = self.db_sess.query(CreditCards).all()
        response = self.format_responce(db_response)
        return response

    def get_banks_cards_data(self):
        db_response = self.

    def get_fast_filter_cards_data(self):
        if self.filter_type == "lowest_fee":
            db_response = self.db_sess.query(LowestFee).all()

        if self.filter_type == "best_cashback":
            db_response = self.db_sess.query(BestCashBack).all()

        if self.filter_type == "lowest_APR":
            db_response = self.db_sess.query(LowestApr).all()

        response = self.format_responce(db_response)
        return response

    def generate_cards(self):
        cards = []

        if self.filter_type == "default":
            print("default")
            cards = self.get_default_cards_data()

        if self.filter_type in ["lowest_fee", "best_cashback", "lowest_APR"]:
            print("fast_filter")
            cards = self.get_fast_filter_cards_data()

        print(cards)
        return cards
