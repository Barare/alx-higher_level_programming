#!/usr/bin/python3
def uppercase(str):
    """Print a string in uppercase."""
    for c in str:
        if ord(c) >= 97 and ord(c) <= 123:
            c = chr(ord(c) - 32)
<<<<<<< HEAD
        print("{}".format(c), end="")
    print("")
=======
            print("{}".format(c), end="")
        print("")
>>>>>>> 08b46968cd697c2dc3fb4c5a20438f0638a63641
