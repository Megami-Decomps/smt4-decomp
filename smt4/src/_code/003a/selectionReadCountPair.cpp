#include "classes/SelectionCommandDecode.h"

/* Reads the packed 24-bit/8-bit count pair; each count is stored plus one. */
static __inline s32 selectionReadCounts(SelectionCommand *command, const u8 *source, u32 size)
{
    if (size < 4)
        return -1;
    u32 counts = (__rev(*reinterpret_cast<const u32 *>(source)) & ~0xffu) | source[3];
    command->first = (counts >> 8) + 1;
    command->second = (counts & 0xff) + 1;
    return 4;
}

/* Decode the selector and a packed 24-bit count/8-bit count pair. */
extern "C" s32 selectionReadCountPair(SelectionCommand *command, const u8 *source, u32 size)
{
    s32 used = selectionReadHeader(command, source, size);
    if (used < 0)
        return -1;
    s32 read = selectionReadCounts(command, source + used, size - used);
    if (read < 0)
        return -1;
    return used + read;
}
