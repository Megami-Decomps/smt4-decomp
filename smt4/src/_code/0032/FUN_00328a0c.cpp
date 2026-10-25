#include "common.h"
#include "gfx/EffectEditorParameters.h"

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


/* Hands the parent's block and value, a descriptor entry and its table to FUN_0024330c. */
void FUN_00328a0c(FUN_00328a0cObj *obj)
{
    FUN_0024330c(reinterpret_cast<u32 *>(obj->parent->block), obj->parent->value, reinterpret_cast<EffectEditorOptions *>(DAT_0044fd50 + 0x38), reinterpret_cast<EffectEditorOptions *>(DAT_0044fd50));
}

} /* extern "C" */
