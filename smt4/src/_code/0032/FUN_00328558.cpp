#include "common.h"

struct FUN_00328558Sub {
    u8 unk00[0x60];
    u8 block[0x58];
    s32 value;
};

struct FUN_00328558Parent {
    u8 unk00[0x44];
    FUN_00328558Sub sub;
};

struct FUN_00328558Obj {
    u8 unk00[0xc];
    FUN_00328558Parent *parent;
};

extern "C" {

extern u8 DAT_0044fd18[];

void FUN_0024330c(u8 *block, s32 value, const u8 *entry, const u8 *table);

/* Hands the parent's block and value, a descriptor entry and its table to FUN_0024330c. */
void FUN_00328558(FUN_00328558Obj *obj)
{
    FUN_00328558Sub *sub = &obj->parent->sub;
    FUN_0024330c(sub->block, sub->value, DAT_0044fd18 + 0x70, DAT_0044fd18);
}

} /* extern "C" */
