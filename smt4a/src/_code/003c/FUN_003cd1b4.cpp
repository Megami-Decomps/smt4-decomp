#include "common.h"
#include "gfx/EffectEditorParameters.h"

struct FUN_003cd1b4Parent {
    u8 unk00[0x34];
    u8 block[0x58];
    s32 value;
};

struct FUN_003cd1b4Obj {
    u8 unk00[0xc];
    FUN_003cd1b4Parent *parent;
};

extern "C" {

extern u8 DAT_0059ef80[];


/* Hands the parent's block and value, a descriptor entry and its table to FUN_0031ab38. */
void FUN_003cd1b4(FUN_003cd1b4Obj *obj)
{
    FUN_0031ab38(reinterpret_cast<u32 *>(obj->parent->block), obj->parent->value, reinterpret_cast<EffectEditorOptions *>(DAT_0059ef80 - 0xa8), reinterpret_cast<EffectEditorOptions *>(DAT_0059ef80));
}

} /* extern "C" */
