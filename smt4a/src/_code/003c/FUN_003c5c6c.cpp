#include "common.h"
#include "gfx/EffectEditorParameters.h"

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


/* Hands the parent's block and value, a descriptor entry and its table to FUN_0031ab38. */
void FUN_003c5c6c(FUN_003c5c6cObj *obj)
{
    FUN_0031ab38(reinterpret_cast<u32 *>(obj->parent->block), obj->parent->value, reinterpret_cast<EffectEditorOptions *>(DAT_0059ee68 + 0x70), reinterpret_cast<EffectEditorOptions *>(DAT_0059ee68));
}

} /* extern "C" */
