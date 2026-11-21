/* NON_MATCHING: two compares take their operands in the other order (cmp r8, r9 for retail's
 * cmp r9, r8 on the capacity test, cmp r0, r8 for cmp r8, r0 on the second refill), and the 64-bit
 * right shifts call armlib's __aeabi_llsr, which the symbol table still names __aeabi_llsr. */
#include "gfx/BitReader.h"
#include "sys/PlatformFault.h"

/* Refills the bit buffer a byte at a time until it holds at least `bits` bits. */
static __inline void bitReaderFill(BitReader *reader, u32 bits)
{
    while (reader->available < bits) {
        u64 byte = *reader->cursor++;
        reader->buffer |= byte << (56 - reader->available);
        reader->available += 8;
    }
}

extern "C" {

/* Reads the next `bits` (at most 64) bits, most significant first. */
u64 bitReaderRead(BitReader *reader, u32 bits)
{
    if (bits > 64)
        sysRequestFatalBreak();
    u32 capacity = 64 - ((64 - reader->available) & 7);
    if (bits <= capacity) {
        bitReaderFill(reader, bits);
        u64 result = reader->buffer >> (64 - bits);
        reader->buffer <<= bits;
        reader->available -= bits;
        return result;
    }
    u32 remaining = bits - capacity;
    bitReaderFill(reader, capacity);
    u64 result = (reader->buffer >> (64 - capacity)) << remaining;
    u64 byte = *reader->cursor++;
    result |= byte >> (8 - remaining);
    reader->buffer = byte << (remaining + 56);
    reader->available = 8 - remaining;
    return result;
}

} /* extern "C" */
