#include "common.h"
#include "gfx/EffectEditorParameters.h"

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


/* Hands the sub-record's block and value, a descriptor entry and its table to FUN_0031ab38. */
void FUN_003c8b50(Obj326fb8 *obj)
{
    Obj326fb8Sub *sub = &obj->parent->sub;
    FUN_0031ab38(reinterpret_cast<u32 *>(sub->block), sub->value, reinterpret_cast<EffectEditorOptions *>(DAT_0059ee68 + 0x70), reinterpret_cast<EffectEditorOptions *>(DAT_0059ee68));
}
}
