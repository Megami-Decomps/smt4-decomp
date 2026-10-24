#include "common.h"

struct FUN_003c3770Parent {
    u8 unk00[0x34];
    u8 block[0x58];
    s32 value;
};

struct FUN_003c3770Obj {
    u8 unk00[0xc];
    FUN_003c3770Parent *parent;
};

extern "C" {

extern u8 DAT_0059eea0[];

void FUN_0031ab38(u8 *block, s32 value, const u8 *entry, const u8 *table);

/* Hands the parent's block and value, a descriptor entry and its table to FUN_0031ab38. */
void FUN_003c3770(FUN_003c3770Obj *obj)
{
    FUN_0031ab38(obj->parent->block, obj->parent->value, DAT_0059eea0 + 0x38, DAT_0059eea0);
}

} /* extern "C" */
