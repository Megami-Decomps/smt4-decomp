#include "common.h"

struct Obj00328454Parent {
    u8 unk00[0x60];
    u8 block[1];
    u8 unk61[0x2b];
    s32 value;
};

struct Obj00328454 {
    u8 unk00[0xc];
    Obj00328454Parent *parent;
};

extern "C" {
extern u8 DAT_0044fd50[];

void FUN_0024330c(u8 *block, s32 value, const u8 *entry, const u8 *table);

/* Hands the parent's block and value, a descriptor entry and its table to FUN_0024330c. */
void FUN_00328454(Obj00328454 *obj)
{
    FUN_0024330c(obj->parent->block, obj->parent->value, DAT_0044fd50 + 0x38, DAT_0044fd50);
}
}
