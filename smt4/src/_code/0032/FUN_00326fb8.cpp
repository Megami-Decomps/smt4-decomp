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
extern u8 DAT_0044fd18[];


/* Hands the sub-record's block and value, a descriptor entry and its table to FUN_0024330c. */
void FUN_00326fb8(Obj326fb8 *obj)
{
    Obj326fb8Sub *sub = &obj->parent->sub;
    FUN_0024330c(reinterpret_cast<u32 *>(sub->block), sub->value, reinterpret_cast<EffectEditorOptions *>(DAT_0044fd18 + 0x70), reinterpret_cast<EffectEditorOptions *>(DAT_0044fd18));
}
}
