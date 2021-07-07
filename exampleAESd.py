#!/usr/bin/python

# Last modified: J. Montalvo-Urquizo (20210210)

from Crypto.Cipher import AES

file_in = open("encrypted.bin", "rb")
nonce, tag, ciphertext = [file_in.read(x) for x in (16, 16, -1)]

key = b'JMontalvoUrquizo'
print('key:\n' + str(key))
cipher = AES.new(key, AES.MODE_EAX, nonce)
data = cipher.decrypt_and_verify(ciphertext, tag)
print(data)