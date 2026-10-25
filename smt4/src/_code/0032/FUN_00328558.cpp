#include "common.h"
#include "gfx/EffectEditorParameters.h"

struct FUN_00328558Sub {
    u8 unk00[0x60];
    u8 block[0x58];
    s32 value;
};

struct FUN_00328558Parent {
    u8 unk00[0x44];
    FUN_00328558Sub sub;
};

struct FUN_00328558Obj {
    u8 unk00[0xc];
    FUN_00328558Parent *parent;
};

extern "C" {

extern u8 DAT_0044fd18[];


/* Hands the parent's block and value, a descriptor entry and its table to FUN_0024330c. */
void FUN_00328558(FUN_00328558Obj *obj)
{
    FUN_00328558Sub *sub = &obj->parent->sub;
    FUN_0024330c(reinterpret_cast<u32 *>(sub->block), sub->value, reinterpret_cast<EffectEditorOptions *>(DAT_0044fd18 + 0x70), reinterpret_cast<EffectEditorOptions *>(DAT_0044fd18));
}

} /* extern "C" */
