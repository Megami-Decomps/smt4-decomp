#include "common.h"
#include "gfx/EffectEditorParameters.h"

struct FUN_00324a04Parent {
    u8 unk00[184];
    s32 value;
    u8 unkbc[88];
    u8 block[1];
};

struct FUN_00324a04Obj {
    u8 unk00[0xc];
    FUN_00324a04Parent *parent;
};

extern "C" {

extern u8 DAT_0044fd18[];


/* Hands the parent's block and value, a descriptor entry and its table to FUN_0024330c. */
void FUN_00324a04(FUN_00324a04Obj *obj)
{
    FUN_0024330c(reinterpret_cast<u32 *>(obj->parent->block), obj->parent->value, reinterpret_cast<EffectEditorOptions *>(DAT_0044fd18 + 0x70), reinterpret_cast<EffectEditorOptions *>(DAT_0044fd18));
}

} /* extern "C" */
