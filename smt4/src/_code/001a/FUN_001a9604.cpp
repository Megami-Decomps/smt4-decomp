/* NON_MATCHING: parameters now pass as float2/float3 aggregates (retail copies them as d8 and s18-s20, stores both with vstm); VFP register assignment (retail d8/s21/s18-s20), the writeback load of the self-relative offset and the merged mode store still differ. */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

struct ModelFloat2 {
    f32 values[2];
};
struct ModelFloat3 {
    f32 values[3];
};
struct ModelParameterControl {
    /* 0x00 */ s32 mode;
    /* 0x04 */ ModelFloat3 parameters;
};
struct ModelParameterState {
    /* 0x00 */ u8 unk00[0xB4];
    /* 0xB4 */ ModelFloat2 unkB4;
    /* 0xBC */ f32 unkBC;
    /* 0xC0 */ f32 unkC0;
    /* 0xC4 */ u8 unkC4[4];
    /* 0xC8 */ s32 controlOffset;
};

static __inline void *offsetPointer(s32 *offset)
{
    return *offset != 0 ? reinterpret_cast<u8 *>(offset) + *offset : NULL;
}

extern "C" {
u32 asdModelIdListGet(s32 index, s32 list);

/* Updates the default model's vector and relative mode/parameter block. */
void FUN_001a9604(s32 mode, ModelFloat2 ab, f32 c, ModelFloat3 parameters)
{
    AsdModelEntry *entry = reinterpret_cast<AsdModelEntry *>(asdModelIdListGet(0, 0));
    ModelParameterState *state = reinterpret_cast<ModelParameterState *>(entry->unk08);
    state->unkB4 = ab;
    state->unkBC = c;
    state->unkC0 = 1.0f;
    ModelParameterControl *control = reinterpret_cast<ModelParameterControl *>(offsetPointer(&state->controlOffset));
    if (mode == -1) {
        control->mode = 0;
    } else if (mode == 0) {
        control->mode = 1;
    } else if (mode == 1) {
        control->mode = 2;
    } else if (mode == 2) {
        control->mode = 3;
    }
    control->parameters = parameters;
}
}
