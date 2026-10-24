#include "common.h"

extern "C" {

struct CommandRange {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 start;
    /* 0x08 */ u8 unk08[4];
    /* 0x0c */ s32 offset;
    /* 0x10 */ u8 unk10[0x3c];
};

/* Cursor over the command stream a CommandBufferSet is writing. */
struct StreamCursor {
    /* 0x00 */ s32 current;
    /* 0x04 */ s32 committed;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ u32 pendingSize;
};

struct CommandBufferSet {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ CommandRange ranges[2];
    /* 0x09c */ s32 activeIndex;
    /* 0x0a0 */ u32 pendingSize;
    /* 0x0a4 */ u8 unk0a4[4];
    /* 0x0a8 */ StreamCursor *cursor;
};

void rangeOffsetAdd(CommandRange *range, s32 amount);
s32 rangeGetEnd(CommandRange *range);
void gfxCommandBufferSubmit(CommandRange *range, u32 size);
void FUN_0016d338(StreamCursor *cursor, u32 end);

/* Flushes the bytes the cursor has advanced past into the active range and submits them. */
void gfxCommandSetFlushCursor(CommandBufferSet *set)
{
    StreamCursor *cursor = set->cursor;
    s32 advanced = (cursor->current - cursor->committed) & ~3;

    if (advanced == 0) {
        return;
    }
    CommandRange *range = &set->ranges[set->activeIndex];
    rangeOffsetAdd(range, advanced);
    u32 size = cursor->pendingSize;
    set->pendingSize = size;
    if (size != 0) {
        gfxCommandBufferSubmit(range, size);
    }
    FUN_0016d338(cursor, rangeGetEnd(range));
}

} /* extern "C" */
