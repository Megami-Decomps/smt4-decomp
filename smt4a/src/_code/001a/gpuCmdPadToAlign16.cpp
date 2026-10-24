/* Pads the command stream with zero words up to the next 16-byte boundary of `offset` (the current byte position).
 * Returns the new write cursor. */
#include "common.h"

extern "C" u32 *gpuCmdPadToAlign16(u32 *cursor, u32 offset)
{
    if ((offset & 0xF) != 0) {
        u32 misalignedWords = (offset >> 2) & 3;
        s32 padWords = 4 - misalignedWords;

        for (s32 i = 0; i < padWords; i++) {
            *cursor++ = 0;
        }
    }
    return cursor;
}
