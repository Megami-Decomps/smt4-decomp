/* NON_MATCHING: retail keeps an empty counting loop (`for (i = 0; i < count; i++)`) and returns its counter in r0 (the pointer to the block when the flag bits are clear); armcc drops the loop from a void function. */
#include "common.h"

struct Obj2fe55cBlock {
    s32 count;
    u8 unk04[8];
    u32 flags;
};

struct Obj2fe55cOwner {
    u8 unk00[0xc0];
    Obj2fe55cBlock block;
};

struct Obj2fe55c {
    u8 unk00[0x24];
    Obj2fe55cOwner *owner;
};

extern "C" void FUN_002fe55c(Obj2fe55c *obj)
{
    Obj2fe55cBlock *block = &obj->owner->block;
    if (block->flags & 0xff000000) {
        for (s32 i = 0; i < block->count; i++) {
        }
    }
}
