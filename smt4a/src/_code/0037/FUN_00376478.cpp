#include "common.h"

struct Obj2f3058Block {
    u8 unk00[0x20];
    u32 offset;
    u8 unk24[0x94];
    u8 *base;
};

struct Obj2f3058Inner {
    u8 unk00[0x24];
    Obj2f3058Block *block;
};

struct Obj2f3058 {
    u8 unk00[0x9c];
    Obj2f3058Inner *inner;
};

/* Returns the address `offset` bytes into the block's data, or NULL when it has no offset. */
extern "C" u8 *FUN_00376478(Obj2f3058 *obj)
{
    Obj2f3058Block *block = obj->inner->block;
    if (block->offset == 0) {
        return NULL;
    }
    return block->base + block->offset;
}
