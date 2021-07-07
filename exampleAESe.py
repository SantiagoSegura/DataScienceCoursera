#!/usr/bin/python

# Last modified: J. Montalvo-Urquizo (20210210)

message = b'Considerando este com un texto sencillo, usaremos sus caracteres para mostrar la implementacion de l algoritmo AES para cifrar su contenido'
from Crypto.Cipher import AES

key = b'JMontalvoUrquizo'
print('key:\n'+str(key))
cipher = AES.new(key, AES.MODE_EAX)
ciphertext, tag = cipher.encrypt_and_digest(message)
print('ciphertext:\n'+str(ciphertext))


file_out = open("encrypted.bin", "wb")
[file_out.write(x) for x in (cipher.nonce, tag, ciphertext)]
file_out.close()
