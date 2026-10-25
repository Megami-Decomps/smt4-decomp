#include "common.h"
#include "gfx/EffectEditorParameters.h"

struct Obj003249b0Parent {
    u8 unk00[0xb8];
    s32 value;
    u8 unkbc[0x3c];
    u8 block[1];
};

struct Obj003249b0 {
    u8 unk00[0xc];
    Obj003249b0Parent *parent;
};

extern "C" {
extern u8 DAT_0044fd18[];


/* Hands the parent's block and value, a descriptor entry and its table to FUN_0024330c. */
void FUN_003249b0(Obj003249b0 *obj)
{
    FUN_0024330c(reinterpret_cast<u32 *>(obj->parent->block), obj->parent->value, reinterpret_cast<EffectEditorOptions *>(DAT_0044fd18 + 0x70), reinterpret_cast<EffectEditorOptions *>(DAT_0044fd18));
}
}
