/* NON_MATCHING: The two vector groups use different saved VFP registers and relative-pointer address formation. */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

struct ModelParameterControl {
    /* 0x00 */ s32 mode;
    /* 0x04 */ f32 parameters[3];
};
struct ModelParameterState {
    /* 0x00 */ u8 unk00[0xB4];
    /* 0xB4 */ f32 unkB4[3];
    /* 0xC0 */ f32 unkC0;
    /* 0xC4 */ u8 unkC4[4];
    /* 0xC8 */ s32 controlOffset;
};

extern "C" {
u32 asdModelIdListGet(s32 index, s32 list);

/* Updates the default model's vector and relative mode/parameter block. */
void FUN_001a9604(s32 mode, f32 a, f32 b, f32 c, f32 d, f32 e, f32 f)
{
    AsdModelEntry *entry = reinterpret_cast<AsdModelEntry *>(asdModelIdListGet(0, 0));
    ModelParameterState *state = reinterpret_cast<ModelParameterState *>(entry->unk08);
    state->unkB4[0] = a;
    state->unkB4[1] = b;
    state->unkB4[2] = c;
    state->unkC0 = 1.0f;
    ModelParameterControl *control = state->controlOffset != 0
        ? reinterpret_cast<ModelParameterControl *>(reinterpret_cast<u8 *>(&state->controlOffset) + state->controlOffset)
        : NULL;
    if (mode == -1) {
        control->mode = 0;
    } else if (mode == 0) {
        control->mode = 1;
    } else if (mode == 1) {
        control->mode = 2;
    } else if (mode == 2) {
        control->mode = 3;
    }
    control->parameters[0] = d;
    control->parameters[1] = e;
    control->parameters[2] = f;
}
}
