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

    def default_cards(self):
        default_cards_result = {}
        db_response = self.db_sess.query(CreditCards).all()

    def get_fast_filter_cards(self):
        fast_filter_cards_result = {}
        if self.filter_type == "lowest_fee":
            db_response = self.db_sess.query(LowestFee).all()

        if self.filter_type == "best_cashback":
            db_response = self.db_sess.query(BestCashBack).all()

        if self.filter_type == "lowest_APR":
            db_response = self.db_sess.query(LowestApr).all()

        for row in db_response:
            fast_filter_cards_result["card_name"] = row.card_name
            fast_filter_cards_result["cashback"] = row.cashback
            fast_filter_cards_result["annual_fee"] = row.annual_fee
            fast_filter_cards_result["credit_score"] = row.credit_score
            fast_filter_cards_result["network"] = row.network
            fast_filter_cards_result["regular_apr"] = row.regular_apr
            fast_filter_cards_result["bank_name"] = row.bank_name
            fast_filter_cards_result["img_path"] = row.regular_apr
        return fast_filter_cards_result

    def get_full_filter_cards(self):
        pass

    def get_cards(self):
        result = ""
        if self.filter_type == "default":
            result = self.default_cards()
        if self.filter_type in ["lowest_fee", "best_cashback", "lowest_APR"]
        print(self.get_fast_filter_cards())


class Debit:
    def __init__(self) -> None:
        pass

    def get_banks_filter_card(self):
        pass
