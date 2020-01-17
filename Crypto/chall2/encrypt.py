from itertools import izip, cycle
import base64
from Nova import key

def encrypt_string(flag, key):
    xored = ''.join(chr(ord(x) ^ ord(y)) for (x,y) in izip(flag, cycle(key)))
    ciphertext = base64.encodestring(xored).strip()
    return ciphertext

ciphertext = encrypt_string(flag, key)

