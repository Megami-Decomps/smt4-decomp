#include "common.h"
#include "gfx/EffectEditorParameters.h"

struct Obj0031ea5cParent {
    u8 unk00[0x60];
    u8 block[1];
    u8 unk61[0x57];
    s32 value;
};

struct Obj0031ea5c {
    u8 unk00[0xc];
    Obj0031ea5cParent *parent;
};

extern "C" {
extern u8 DAT_0044fd18[];


/* Hands the parent's block and value, a descriptor entry and its table to FUN_0024330c. */
void FUN_0031ea5c(Obj0031ea5c *obj)
{
    FUN_0024330c(reinterpret_cast<u32 *>(obj->parent->block), obj->parent->value, reinterpret_cast<EffectEditorOptions *>(DAT_0044fd18 + 0x70), reinterpret_cast<EffectEditorOptions *>(DAT_0044fd18));
}
}
