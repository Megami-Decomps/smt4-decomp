/* NON_MATCHING: same code and instruction order; only register allocation differs (ip vs r2/r3) */
#include "common.h"

struct Obj1b14dc {
    u8 *begin;
    u8 *cursor;
};

struct Obj1b14dcRange {
    u8 *start;
    s32 words;
};

extern "C" u8 *FUN_001af0d0(u8 *cursor, s32 flag);

/* Zero-pads the buffer so the next block is 16-byte aligned, then closes the block: reports its start and size in words. */
extern "C" void FUN_001b14dc(Obj1b14dc *buffer, Obj1b14dcRange *range)
{
    u8 *cursor = buffer->cursor;
    u32 offset = (((u32)(cursor - buffer->begin)) & ~3u) + 8;
    if ((offset & 15) != 0) {
        s32 padWords = 4 - ((offset >> 2) & 3);
        if (padWords > 0) {
            for (s32 i = 0; i < padWords; i++) {
                ((u32 *)cursor)[i] = 0;
            }
            cursor += padWords * 4;
        }
    }
    buffer->cursor = FUN_001af0d0(cursor, 1);
    u8 *begin = buffer->begin;
    range->words = (buffer->cursor - begin) >> 2;
    range->start = begin;
    buffer->begin = buffer->cursor;
}
