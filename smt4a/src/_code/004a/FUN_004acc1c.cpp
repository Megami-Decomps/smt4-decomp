/* NON_MATCHING: reservoir stores combine into STM/STRD and the compiler uses a smaller saved-register set. */
#include "gfx/BitReader.h"
extern "C" {
void sysRequestFatalBreak(void);
u64 runtimeShiftLeftWide(u64 value, u32 count);
u64 FUN_001d3f18(u64 value, u32 count);

static inline void bitReaderFill(BitReader *reader, u32 bits)
{
    while (reader->available < bits) {
        const u8 *next = reader->cursor++;
        u32 available = reader->available;
        u64 buffer = reader->buffer;
        u64 byte = runtimeShiftLeftWide(*next, 56 - available);
        reader->available = available + 8;
        reader->buffer = buffer | byte;
    }
}

u64 FUN_004acc1c(BitReader *reader, u32 bits)
{
    if (bits > 64)
        sysRequestFatalBreak();
    u32 capacity = 64 - ((64 - reader->available) & 7);
    if (bits <= capacity) {
        bitReaderFill(reader, bits);
        u64 buffer = reader->buffer;
        u64 result = FUN_001d3f18(buffer, 64 - bits);
        reader->buffer = runtimeShiftLeftWide(buffer, bits);
        reader->available -= bits;
        return result;
    }
    u32 remaining = bits - capacity;
    bitReaderFill(reader, capacity);
    u64 result = runtimeShiftLeftWide(FUN_001d3f18(reader->buffer, 64 - capacity), remaining);
    u64 byte = *reader->cursor++;
    result |= FUN_001d3f18(byte, 8 - remaining);
    reader->buffer = runtimeShiftLeftWide(byte, remaining + 56);
    reader->available = 8 - remaining;
    return result;
}
}
