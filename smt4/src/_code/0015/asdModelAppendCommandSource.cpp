#include "common.h"

struct Block1b1434 {
    u8 unk00[0x14];
    u32 flags;

    void setFlag(u32 mask, bool enabled)
    {
        if (enabled) {
            flags |= mask;
        } else {
            flags &= ~mask;
        }
    }
};

struct Owner1b1434 {
    u8 unk00[8];
    Block1b1434 *block;
    u8 unk0c[6];
    u8 pending;
};

struct CommandSpan {
    const void *data;
    u32 size;
};

struct Source1b1434 {
    u8 unk00[0x2c];
    u32 flags;
    u8 header[0x30];
    CommandSpan payload;
};

extern "C" {
extern u8 *g_commandBufferCursor;
void asdModelPushCommandBlock(void);
void nnnstdMemCpy(void *destination, const void *source, u32 size);

/* Copies a fixed block to the command buffer cursor and advances the cursor past it (whole words). */
static __inline void commandBufferAppend(const void *data, u32 size)
{
    nnnstdMemCpy(g_commandBufferCursor, data, size);
    g_commandBufferCursor += size & ~3u;
}

/* Copies a data span to the command buffer cursor and advances the cursor past it (whole words). */
static __inline void commandBufferAppendSpan(CommandSpan span)
{
    nnnstdMemCpy(g_commandBufferCursor, span.data, span.size);
    g_commandBufferCursor += span.size & ~3u;
}

/* Appends the source's data and 0x30-byte header to the command buffer and copies its two flag bits onto the owner's block. */
void asdModelAppendCommandSource(Owner1b1434 *owner, Source1b1434 *source)
{
    if (owner->pending != 0) {
        asdModelPushCommandBlock();
        owner->pending = 0;
    }
    CommandSpan payload = source->payload;
    commandBufferAppendSpan(payload);
    commandBufferAppend(source->header, 0x30);
    u32 flags = source->flags;
    u32 flagA = flags & 1;
    u32 flagB = (flags & 2) >> 1;
    owner->block->setFlag(0x80, flagA);
    owner->block->setFlag(0x100, flagB);
}
}
