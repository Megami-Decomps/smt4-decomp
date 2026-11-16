#include "common.h"

struct Obj2fe55cBlock {
    /* 0x00 */ s32 count;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u32 flags;
};

struct Obj2fe55cOwner {
    /* 0x00 */ u8 unk00[0xc0];
    /* 0xC0 */ Obj2fe55cBlock block;
};

struct Obj2fe55c {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ Obj2fe55cOwner *owner;
};

/* Walks the block's slots once its flag byte is set (the per-slot work is gone from this build) and
 * returns how many it walked. With the flag byte clear it returns nothing (retail's r0 still holds
 * the block). */
extern "C" s32 FUN_002fe55c(Obj2fe55c *obj)
{
    Obj2fe55cBlock *block = &obj->owner->block;

    if (block->flags & 0xff000000) {
        s32 i = 0;
        while (i < block->count) {
            i++;
        }
        return i;
    }
}
