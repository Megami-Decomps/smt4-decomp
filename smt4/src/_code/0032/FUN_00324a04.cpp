#include "common.h"

struct FUN_00324a04Parent {
    u8 unk00[184];
    s32 value;
    u8 unkbc[88];
    u8 block[1];
};

struct FUN_00324a04Obj {
    u8 unk00[0xc];
    FUN_00324a04Parent *parent;
};

extern "C" {

extern u8 DAT_0044fd18[];

void FUN_0024330c(u8 *block, s32 value, const u8 *entry, const u8 *table);

/* Hands the parent's block and value, a descriptor entry and its table to FUN_0024330c. */
void FUN_00324a04(FUN_00324a04Obj *obj)
{
    FUN_0024330c(obj->parent->block, obj->parent->value, DAT_0044fd18 + 0x70, DAT_0044fd18);
}

} /* extern "C" */
