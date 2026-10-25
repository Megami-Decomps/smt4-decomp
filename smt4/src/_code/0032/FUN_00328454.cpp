#include "common.h"
#include "gfx/EffectEditorParameters.h"

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


/* Hands the parent's block and value, a descriptor entry and its table to FUN_0024330c. */
void FUN_00328454(Obj00328454 *obj)
{
    FUN_0024330c(reinterpret_cast<u32 *>(obj->parent->block), obj->parent->value, reinterpret_cast<EffectEditorOptions *>(DAT_0044fd50 + 0x38), reinterpret_cast<EffectEditorOptions *>(DAT_0044fd50));
}
}
