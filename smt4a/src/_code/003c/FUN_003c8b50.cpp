#include "common.h"

struct Obj326fb8Sub {
    u8 unk00[0x60];
    u8 block[0x58];
    s32 value;
};

struct Obj326fb8Parent {
    u8 unk00[0x1c];
    Obj326fb8Sub sub;
};

struct Obj326fb8 {
    u8 unk00[0xc];
    Obj326fb8Parent *parent;
};

extern "C" {
extern u8 DAT_0059ee68[];

void FUN_0031ab38(u8 *block, s32 value, const u8 *entry, const u8 *table);

/* Hands the sub-record's block and value, a descriptor entry and its table to FUN_0031ab38. */
void FUN_003c8b50(Obj326fb8 *obj)
{
    Obj326fb8Sub *sub = &obj->parent->sub;
    FUN_0031ab38(sub->block, sub->value, DAT_0059ee68 + 0x70, DAT_0059ee68);
}
}
