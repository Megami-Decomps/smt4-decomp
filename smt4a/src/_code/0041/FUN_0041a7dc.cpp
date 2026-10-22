#include "common.h"

extern "C" {

typedef struct WorkState {
    /* 0x00 */ u32 w00;
    /* 0x04 */ u32 w04;
    /* 0x08 */ u32 w08;
    /* 0x0C */ u32 w0C;
    /* 0x10 */ u32 w10;
    /* 0x14 */ u32 w14;
    /* 0x18 */ u32 w18;
    /* 0x1C */ u32 w1C;
    /* 0x20 */ u32 w20;
    /* 0x24 */ u32 w24;
    /* 0x28 */ u32 w28;
    /* 0x2C */ u32 w2C;
    /* 0x30 */ u32 w30;
    /* 0x34 */ u32 w34;
    /* 0x38 */ u32 w38;
    /* 0x3C */ u32 w3C;
    /* 0x40 */ f32 scale;
    /* 0x44 */ u32 w44;
    /* 0x48 */ u32 w48;
} WorkState;

/* Clears the state's fields; the scale is reset as a float zero. */
void FUN_0041a7dc(WorkState *state)
{
    state->w38 = 0;
    state->w00 = 0;
    state->w04 = 0;
    state->w08 = 0;
    state->w0C = 0;
    state->w10 = 0;
    state->w14 = 0;
    state->w18 = 0;
    state->w1C = 0;
    state->w20 = 0;
    state->w24 = 0;
    state->w28 = 0;
    state->w2C = 0;
    state->w30 = 0;
    state->w34 = 0;
    state->w3C = 0;
    state->scale = 0.0f;
    state->w48 = 0;
}

} /* extern "C" */
