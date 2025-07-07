# -*- coding: utf-8 -*-
import time
import jwt

# Open PEM
private_key = """YOUR_PRIVATE_KEY"""

payload = {
    'iat': int(time.time()) - 30,
    'exp': int(time.time()) + 900,
    'sub': YOUR_PROJECT_ID
}
headers = {
    'kid': YOUR_KEY_ID
}

# Generate JWT
encoded_jwt = jwt.encode(payload, private_key, algorithm='EdDSA', headers = headers)

with open("D:/1AAXX/QTp/TQYB/Token.txt","w") as f:
    f.write("Bearer "+encoded_jwt);