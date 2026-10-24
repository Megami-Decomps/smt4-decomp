#include "common.h"

struct FUN_00328a0cParent {
    u8 unk00[0x34];
    u8 block[0x58];
    s32 value;
};

struct FUN_00328a0cObj {
    u8 unk00[0xc];
    FUN_00328a0cParent *parent;
};

extern "C" {

extern u8 DAT_0044fd50[];

void FUN_0024330c(u8 *block, s32 value, const u8 *entry, const u8 *table);

/* Hands the parent's block and value, a descriptor entry and its table to FUN_0024330c. */
void FUN_00328a0c(FUN_00328a0cObj *obj)
{
    FUN_0024330c(obj->parent->block, obj->parent->value, DAT_0044fd50 + 0x38, DAT_0044fd50);
}

} /* extern "C" */
