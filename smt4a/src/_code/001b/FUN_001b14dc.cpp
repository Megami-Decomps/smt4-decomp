#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

struct Obj1b14dc {
    u8 *begin;
    u8 *cursor;
};

struct Obj1b14dcRange {
    u8 *start;
    s32 words;
};


/* gpuCmdPadToAlign16's body (a plain static copy, inlined): zero words up to the next 16-byte boundary of `offset`. */
static u32 *padToAlign16(u32 *cursor, u32 offset)
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

/* Zero-pads the buffer so the next block is 16-byte aligned, then closes the block: reports its start and size in words. */
extern "C" void FUN_001b14dc(Obj1b14dc *buffer, Obj1b14dcRange *range)
{
    u32 *cursor = reinterpret_cast<u32 *>(buffer->cursor);
    cursor = padToAlign16(cursor, ((u32)(buffer->cursor - buffer->begin) & ~3u) + 8);
    u8 *end = reinterpret_cast<u8 *>(FUN_001af0d0(cursor, 1));
    buffer->cursor = end;
    u8 *begin = buffer->begin;
    range->words = (end - begin) >> 2;
    range->start = begin;
    buffer->begin = buffer->cursor;
}
