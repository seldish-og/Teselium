import hashlib
import requests
import random


def generate_key():
    params = {
        "pc": "10",
        "wc": "8",
        "sp": "map",
        "maxCh": "64"
    }
    url = "https://makemeapassword.ligos.net/api/v1/hex/plain"
    response = requests.get(url, params=params).text

    hashed_key = int(hashlib.sha256(response.encode(
        'utf-8')).hexdigest(), 20) % 16**8

    return str(hashed_key)


def generate_default_key():
    random_key = str(random.randint(1, 10000000000))
    hashed_key = int(hashlib.sha256(random_key.encode(
        'utf-8')).hexdigest(), 20) % 16**8
    return str(hashed_key)


# generate_key()
# generate_default_key()
