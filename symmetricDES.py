#!/usr/bin/python

# Last modified: J. Montalvo-Urquizo (20210210)

import pyDes

# Punto 1
data = b"This is a small test for the DES Algorithm Implementation to be used at MA2002B"
print("\n\nOriginal Data: %r" % data)

# Punto 2
kAlice = pyDes.des("MONTALVO", pyDes.CBC, "\0\0\0\0\0\0\0\0", pad=None, padmode=pyDes.PAD_PKCS5)
print("Alice's key is: %r" % kAlice.getKey())

# Punto 3
dataTransfered = kAlice.encrypt(data)
print("Alice's Encrypted Message: %r\n" % dataTransfered)

# Punto 4
kBob = pyDes.des("MONTALVO", pyDes.CBC, "\0\0\0\0\0\0\0\0", pad=None, padmode=pyDes.PAD_PKCS5)
print("Bob's key is: %r" % kBob.getKey())

# Punto 5
decrypted = kBob.decrypt(dataTransfered)
print("Bob's decrypted message is: %r" % decrypted)
assert decrypted==data
