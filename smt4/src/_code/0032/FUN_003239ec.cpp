#include "common.h"
#include "gfx/EffectEditorParameters.h"

struct ParameterData {
    /* 0x00 */ u8 data[0x8c];
    /* 0x8C */ u32 value;
};

struct ParameterOwner {
    /* 0x00 */ u8 unk00[12];
    /* 0x0C */ ParameterData *parameters;
};

extern "C" {

extern u8 DAT_0044fd50[];


/* Virtual slot: applies the owner's parameter block at +52 to the table at DAT_0044fd50 +56. */
void FUN_003239ec(ParameterOwner *owner)
{
    ParameterData *data = owner->parameters;
    FUN_0024330c(reinterpret_cast<u32 *>(data->data + 52), data->value, reinterpret_cast<EffectEditorOptions *>(DAT_0044fd50 + 56), reinterpret_cast<EffectEditorOptions *>(DAT_0044fd50));
}

} /* extern "C" */
