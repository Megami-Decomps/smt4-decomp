#include "common.h"
#include "gfx/EffectEditorParameters.h"

struct Obj0031ea5cParent {
    u8 unk00[0x60];
    u8 block[1];
    u8 unk61[0x57];
    s32 value;
};

struct Obj003bb000 {
    u8 unk00[0xc];
    Obj0031ea5cParent *parent;
};

extern "C" {
extern u8 DAT_0059ee68[];


/* Hands the parent's block and value, a descriptor entry and its table to FUN_0031ab38. */
void FUN_003bb000(Obj003bb000 *obj)
{
    FUN_0031ab38(reinterpret_cast<u32 *>(obj->parent->block), obj->parent->value, reinterpret_cast<EffectEditorOptions *>(DAT_0059ee68 + 0x70), reinterpret_cast<EffectEditorOptions *>(DAT_0059ee68));
}
}
