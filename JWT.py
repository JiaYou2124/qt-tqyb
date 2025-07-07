# -*- coding: utf-8 -*-
import time
import jwt

# Open PEM
private_key = """-----BEGIN PRIVATE KEY-----MC4CAQAwBQYDK2VwBCIEIPI/KjxSHz04bH9EbpN6RRlKmEhpj2GuwCzludl5DRs4-----END PRIVATE KEY-----"""

payload = {
    'iat': int(time.time()) - 30,
    'exp': int(time.time()) + 900,
    'sub': '2C2EQF4RUU'
}
headers = {
    'kid': 'CEGW84ANFP'
}

# Generate JWT
encoded_jwt = jwt.encode(payload, private_key, algorithm='EdDSA', headers = headers)

with open("D:/1AAXX/QTp/TQYB/Token.txt","w") as f:
    f.write("Bearer "+encoded_jwt);