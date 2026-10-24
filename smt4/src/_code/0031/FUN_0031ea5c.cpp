#include "common.h"

struct Obj0031ea5cParent {
    u8 unk00[0x60];
    u8 block[1];
    u8 unk61[0x57];
    s32 value;
};

struct Obj0031ea5c {
    u8 unk00[0xc];
    Obj0031ea5cParent *parent;
};

extern "C" {
extern u8 DAT_0044fd18[];

void FUN_0024330c(u8 *block, s32 value, const u8 *entry, const u8 *table);

/* Hands the parent's block and value, a descriptor entry and its table to FUN_0024330c. */
void FUN_0031ea5c(Obj0031ea5c *obj)
{
    FUN_0024330c(obj->parent->block, obj->parent->value, DAT_0044fd18 + 0x70, DAT_0044fd18);
}
}
