/* NON_MATCHING: retail keeps an empty counting loop (`for (i = 0; i < count; i++)`) and returns its counter in r0 (the pointer to the block when the flag bits are clear); armcc drops the loop from a void function. */
#include "common.h"

struct Obj2198d4Block {
    s32 count;
    u8 unk04[8];
    u32 flags;
};

struct Obj2198d4Owner {
    u8 unk00[0xc0];
    Obj2198d4Block block;
};

struct Obj2198d4 {
    u8 unk00[0x24];
    Obj2198d4Owner *owner;
};

extern "C" void FUN_002198d4(Obj2198d4 *obj)
{
    Obj2198d4Block *block = &obj->owner->block;
    if (block->flags & 0xff000000) {
        for (s32 i = 0; i < block->count; i++) {
        }
    }
}
