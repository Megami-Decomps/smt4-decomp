#include "common.h"

struct SelectionState {
    /* 0x00 */ u8 unk00[16];
    /* 0x10 */ s16 maximum;
    /* 0x12 */ u8 unk12[26];
    /* 0x2c */ s16 selection;
};
/* Clamps a live selection to its allowed range. */
extern "C" s32 FUN_003bc988(SelectionState *state, s32 value)
{
    if (state == NULL)
        return 0;
    if (value > state->maximum)
        value = state->maximum;
    else if (value < 1)
        value = 1;
    state->selection = value;
    return (s16)value;
}
