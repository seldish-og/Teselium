from model.settings import session_db
from model.all_models.cards_models import CreditCards


class Credit:
    def __init__(self, filter_type,
                 full_filter_data=None) -> None:
        self.filter_type = filter_type
        self.full_filter_data = full_filter_data
        print(filter_type,
              full_filter_data)

    def get_fast_filter_cards(self):
        pass

    def get_full_filter_cards(self):
        pass


class Debit:
    def __init__(self) -> None:
        pass

    def get_banks_filter_card(self):
        pass
