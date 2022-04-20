class Default:
    def __init__(self) -> None:
        pass


class Credit(Default):
    def __init__(self) -> None:
        super().__init__()

    def get_fast_filter_cards(self):
        pass

    def get_full_filter_cards(self):
        pass


class Debit(Default):
    def __init__(self) -> None:
        super().__init__()

    def get_banks_filter_card(self):
        pass
