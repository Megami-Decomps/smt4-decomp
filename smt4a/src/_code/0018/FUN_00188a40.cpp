/* NON_MATCHING: the first padded run and the stores match retail; in the second and third runs the loop counter and the fill pointer swap r0/r3 (and the 30 is set before the 15). */
#include "common.h"

#define GPU_COMMAND_FILLER 0xead0fead

/* Pads a command run with `count` filler words (the cursor advances by an even number of words). */
static __inline u32 *gpuCommandPad(u32 *cursor, u32 count)
{
    u32 *fill = cursor;
    for (u32 i = 0; i < count / 2; i++) {
        fill[0] = GPU_COMMAND_FILLER;
        fill[1] = GPU_COMMAND_FILLER;
        fill += 2;
    }
    return cursor + (count - (count & 1));
}

/* Builds a GPU command run in `commands`: headers and filler-padded blocks; returns the end of the run. */
extern "C" u32 *FUN_00188a40(u32 *commands, u32 mode, u32 value)
{
    u32 *cursor = commands;
    *cursor++ = mode != 0 ? 0x300 : value << 8;
    *cursor++ = 0x2025e;
    *cursor++ = 0;
    *cursor++ = 0x900251;
    cursor = gpuCommandPad(cursor, 10);
    *cursor++ = 0;
    *cursor++ = 0x1d00200;
    cursor = gpuCommandPad(cursor, 30);
    *cursor++ = mode != 0 ? 2 : 0;
    *cursor++ = 0x10229;
    *cursor++ = 0;
    *cursor++ = 0x1d00200;
    cursor = gpuCommandPad(cursor, 30);
    *cursor++ = mode;
    *cursor++ = 0x10244;
    return cursor;
}
