/* NON_MATCHING: stack layout and store pairing: retail keeps 16 bytes of other locals between the range and the allocation (frame 36) and stores the copy's data/bit count with one strd; the build has a 24-byte frame and separate stores. */
#include "common.h"

extern "C" {

/* A window into a buffer: where the write starts and where it would end. */
typedef struct BufferRange {
    /* 0x0 */ u32 begin;
    /* 0x4 */ u32 end;
} BufferRange;

/* Result of a buffer write: the new write position and zero. */
typedef struct BufferWriteResult {
    /* 0x0 */ u32 position;
    /* 0x4 */ u32 unk04;
} BufferWriteResult;

/* A bit buffer: its words and the number of bits in it. */
typedef struct BitSource {
    /* 0x00 */ u8 unk00[0x7C];
    /* 0x7C */ u32 words;
    /* 0x80 */ u32 bitCount;
} BitSource;

/* A copied bit buffer: its allocated storage, the bit count and a flag that the storage is owned. */
typedef struct BitCopy {
    /* 0x0 */ u32 data;
    /* 0x4 */ u32 bitCount;
    /* 0x8 */ u8 owned;
} BitCopy;

/* The allocator the range is taken from. */
typedef struct RangeOwner {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u32 base;
    /* 0x10 */ u8 unk10[0x3C];
    /* 0x4C */ u32 capacity;
} RangeOwner;

void FUN_0045b4d0(u32 allocation[3], BufferRange *range, u32 capacity, s32 alignment);
void nnnstdMemCpy(u32 destination, u32 source, u32 size);

/* Allocates room for a bit buffer inside the owner at `offset`, copies the buffer into it and returns the advanced position. */
BufferWriteResult FUN_00507868(BitSource *source, BitCopy *copy, u32 offset, RangeOwner *owner)
{
    u32 allocation[3];
    BufferRange range;
    BufferWriteResult result;

    range.begin = offset;
    range.end = owner->base + offset;
    FUN_0045b4d0(allocation, &range, owner->capacity, 4);
    copy->data = allocation[0];
    copy->bitCount = source->bitCount;
    nnnstdMemCpy(allocation[0], source->words, (source->bitCount + 7) >> 3);
    copy->owned = 1;
    result.position = range.begin;
    result.unk04 = 0;
    return result;
}

} /* extern "C" */
