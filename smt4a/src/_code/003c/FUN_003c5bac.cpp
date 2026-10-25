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

extern u8 DAT_0059ee68[];


/* Virtual slot: applies the owner's parameter block at +96 to the table at DAT_0059ee68 +112. */
void FUN_003c5bac(ParameterOwner *owner)
{
    ParameterData *data = owner->parameters;
    FUN_0031ab38(reinterpret_cast<u32 *>(data->data + 96), data->value, reinterpret_cast<EffectEditorOptions *>(DAT_0059ee68 + 112), reinterpret_cast<EffectEditorOptions *>(DAT_0059ee68));
}

} /* extern "C" */
