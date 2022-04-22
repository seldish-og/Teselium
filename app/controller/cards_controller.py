from email.policy import default
from model.settings import session_db
from model.all_models.cards_models import CreditCards
from model.all_models.fast_filters_model import LowestApr, LowestFee, BestCashBack


class Credit:
    def __init__(self, filter_type,
                 full_filter_data=None) -> None:
        self.filter_type = filter_type
        self.full_filter_data = full_filter_data
        self.db_sess = session_db.create_session()
        print(filter_type,
              full_filter_data)

    def get_default_cards(self):
        db_response = self.db_sess.query(CreditCards).all()
        default_cards_list = []
        for card in db_response:
            cards = {}
            cards["card_name"] = card.card_name
            cards["cashback"] = card.cashback
            cards["annual_fee"] = card.annual_fee
            cards["credit_score"] = card.credit_score
            cards["network"] = card.network
            cards["regular_apr"] = card.regular_apr
            cards["bank_name"] = card.bank_name
            cards["img_path"] = card.regular_apr
            default_cards_list.append(cards)
        return default_cards_list

    def get_fast_filter_cards(self):

        if self.filter_type == "lowest_fee":
            db_response = self.db_sess.query(LowestFee).all()

        if self.filter_type == "best_cashback":
            db_response = self.db_sess.query(BestCashBack).all()

        if self.filter_type == "lowest_APR":
            db_response = self.db_sess.query(LowestApr).all()
        result_cards = []
        for card in db_response:
            cards = {}
            cards["card_name"] = card.card_name
            cards["cashback"] = card.cashback
            cards["annual_fee"] = card.annual_fee
            cards["credit_score"] = card.credit_score
            cards["network"] = card.network
            cards["regular_apr"] = card.regular_apr
            cards["bank_name"] = card.bank_name
            cards["img_path"] = card.regular_apr
            result_cards.append(cards)
        return result_cards

    def get_full_filter_cards(self):
        db_response = self.db_sess.query(CreditCards).all()
        full_filter_cards_list = []
        for card in db_response:
            cards = {}
            cards["card_name"] = card.card_name
            cards["cashback"] = card.cashback
            cards["annual_fee"] = card.annual_fee
            cards["credit_score"] = card.credit_score
            cards["network"] = card.network
            cards["regular_apr"] = card.regular_apr
            cards["bank_name"] = card.bank_name
            cards["img_path"] = card.regular_apr
            full_filter_cards_list.append(cards)
        return full_filter_cards_list

    def get_cards(self):
        cards = ""
        if self.filter_type == "default":
            print("hh")
            cards = self.get_default_cards()
        if self.filter_type in ["lowest_fee", "best_cashback", "lowest_APR"]:
            cards = self.get_fast_filter_cards()

        if self.filter_type == "full_filter":
            cards = self.get_full_filter_cards()
            print("I SUCK")

        return cards


class Debit:
    def __init__(self) -> None:
        pass

    def get_banks_filter_card(self):
        pass
