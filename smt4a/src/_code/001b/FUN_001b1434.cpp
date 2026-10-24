/* NON_MATCHING: same stores and calls; retail loads the data/size pair with one ldm and reads the block pointer after the tst, armcc schedules those loads differently */
#include "common.h"

struct Block1b1434 {
    u8 unk00[0x14];
    u32 flags;
};

struct Owner1b1434 {
    u8 unk00[8];
    Block1b1434 *block;
    u8 unk0c[6];
    u8 pending;
};

struct Source1b1434 {
    u8 unk00[0x2c];
    u32 flags;
    u8 header[0x30];
    const void *data;
    u32 size;
};

extern "C" {
extern u8 *g_commandBufferCursor;
void asdModelPushCommandBlock(void);
void nnnstdMemCpy(void *destination, const void *source, u32 size);

/* Appends the source's data and 0x30-byte header to the command buffer and copies its two flag bits onto the owner's block. */
void FUN_001b1434(Owner1b1434 *owner, Source1b1434 *source)
{
    if (owner->pending != 0) {
        asdModelPushCommandBlock();
        owner->pending = 0;
    }
    u32 size = source->size;
    nnnstdMemCpy(g_commandBufferCursor, source->data, size);
    g_commandBufferCursor += size & ~3u;
    nnnstdMemCpy(g_commandBufferCursor, source->header, 0x30);
    g_commandBufferCursor += 0x30;
    u32 flags = source->flags;
    u32 flagA = flags & 1;
    u32 flagB = (flags & 2) >> 1;
    if (flagA) {
        owner->block->flags |= 0x80;
    } else {
        owner->block->flags &= ~0x80u;
    }
    if (flagB) {
        owner->block->flags |= 0x100;
    } else {
        owner->block->flags &= ~0x100u;
    }
}
}
