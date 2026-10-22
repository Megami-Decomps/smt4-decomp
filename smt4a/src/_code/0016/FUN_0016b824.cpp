/* NON_MATCHING: the compiler hoists the zero and six preset constants into ip/r3 instead of assigning them in each branch. */
#include "common.h"

struct PresetValues {
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u8 unk02;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ u8 unk04;
    /* 0x05 */ u8 unk05;
};
struct PresetState {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ PresetValues values;
};

// Select one of the three enabled presets, or disable the current preset.
extern "C" void FUN_0016b824(PresetState *state, s32 preset)
{
    PresetValues *values = &state->values;
    if (preset == 0) {
        values->enabled = 0;
    } else if (preset == 1) {
        values->enabled = 1;
        values->unk01 = 0;
        values->unk03 = 6;
        values->unk05 = 7;
    } else if (preset == 2) {
        values->enabled = 1;
        values->unk01 = 2;
        values->unk03 = 6;
        values->unk05 = 1;
    } else if (preset == 3) {
        values->enabled = 1;
        values->unk01 = 0;
        values->unk03 = 6;
        values->unk05 = 1;
    }
}
