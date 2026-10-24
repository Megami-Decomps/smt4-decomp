#include "common.h"

struct Obj003249b0Parent {
    u8 unk00[0xb8];
    s32 value;
    u8 unkbc[0x3c];
    u8 block[1];
};

struct Obj003c5c18 {
    u8 unk00[0xc];
    Obj003249b0Parent *parent;
};

extern "C" {
extern u8 DAT_0059ee68[];

void FUN_0031ab38(u8 *block, s32 value, const u8 *entry, const u8 *table);

/* Hands the parent's block and value, a descriptor entry and its table to FUN_0031ab38. */
void FUN_003c5c18(Obj003c5c18 *obj)
{
    FUN_0031ab38(obj->parent->block, obj->parent->value, DAT_0059ee68 + 0x70, DAT_0059ee68);
}
}
