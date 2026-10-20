/* NON_MATCHING: literal pool order: retail holds the DAT_004474f0 address first, then 0.0f and 1.0f; this build emits 0.0f and 1.0f first */
#include "common.h"

extern "C" {

typedef struct EffectState {
    /* 0x000 */ u8 unk000[0xB0];
    /* 0x0B0 */ u8 unk0b0;
    /* 0x0B1 */ u8 unk0b1;
    /* 0x0B2 */ u16 frames;
    /* 0x0B4 */ u16 unk0b4;
    /* 0x0B6 */ u8 unk0b6[2];
    /* 0x0B8 */ f32 unk0b8;
    /* 0x0BC */ f32 unk0bc;
    /* 0x0C0 */ f32 scale;
    /* 0x0C4 */ u8 unk0c4[0x144];
    /* 0x208 */ u32 handle;
} EffectState;

typedef struct EffectHolder {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ EffectState *state;
} EffectHolder;

extern EffectHolder DAT_004474f0;

/* Resets the effect state: stores the handle and restarts the 10-frame, scale 1 parameters. */
void FUN_00273358(u32 handle)
{
    EffectState *state = DAT_004474f0.state;

    state->handle = handle;
    state->unk0b0 = 0;
    state->unk0b1 = 0;
    state->frames = 10;
    state->unk0b4 = 0;
    state->unk0b8 = 0.0f;
    state->unk0bc = 0.0f;
    state->scale = 1.0f;
}

} /* extern "C" */
