#include "common.h"

struct FUN_003cc6f4Sub {
    u8 unk00[0x60];
    u8 block[0x58];
    s32 value;
};

struct FUN_003cc6f4Parent {
    u8 unk00[0x44];
    FUN_003cc6f4Sub sub;
};

struct FUN_003cc6f4Obj {
    u8 unk00[0xc];
    FUN_003cc6f4Parent *parent;
};

extern "C" {

extern u8 DAT_0059ee68[];

void FUN_0031ab38(u8 *block, s32 value, const u8 *entry, const u8 *table);

/* Hands the parent's block and value, a descriptor entry and its table to FUN_0031ab38. */
void FUN_003cc6f4(FUN_003cc6f4Obj *obj)
{
    FUN_003cc6f4Sub *sub = &obj->parent->sub;
    FUN_0031ab38(sub->block, sub->value, DAT_0059ee68 + 0x70, DAT_0059ee68);
}

} /* extern "C" */
