#include "common.h"

struct FUN_003c5c6cParent {
    u8 unk00[184];
    s32 value;
    u8 unkbc[88];
    u8 block[1];
};

struct FUN_003c5c6cObj {
    u8 unk00[0xc];
    FUN_003c5c6cParent *parent;
};

extern "C" {

extern u8 DAT_0059ee68[];

void FUN_0031ab38(u8 *block, s32 value, const u8 *entry, const u8 *table);

/* Hands the parent's block and value, a descriptor entry and its table to FUN_0031ab38. */
void FUN_003c5c6c(FUN_003c5c6cObj *obj)
{
    FUN_0031ab38(obj->parent->block, obj->parent->value, DAT_0059ee68 + 0x70, DAT_0059ee68);
}

} /* extern "C" */
