/* NON_MATCHING: near: 207 rows against 208; retail loads the effect and argument into r0/r1 before each channel's mode test (r5/r6 swapped with ours) and rebuilds the counter compare as limit >= counter+1 through a spare register; the channel blocks, offsets and callees agree. */
#include "common.h"

#define COLOR_KEY_CHANNELS 9
#define COLOR_KEY_VALUES 11
#define COLOR_KEY_ACTIVE_MODES 4

/* A colour-key effect (observed fields): nine channels (the first is RGB: three values), each with a
 * mode, a frame counter, a frame limit, and per-value current/target numbers. */
struct ColorKeyEffect {
    /* 0x000 */ u8 unk000[0x1E4];
    /* 0x1E4 */ f32 value[COLOR_KEY_VALUES];
    /* 0x210 */ f32 param[COLOR_KEY_VALUES];
    /* 0x23C */ f32 target[COLOR_KEY_VALUES];
    /* 0x268 */ u8 unk268[0x79];
    /* 0x2E1 */ s8 mode[COLOR_KEY_CHANNELS];
    /* 0x2EA */ u8 unk2EA[2];
    /* 0x2EC */ s32 counter[COLOR_KEY_CHANNELS];
    /* 0x310 */ u8 unk310[4];
    /* 0x314 */ s32 limit[COLOR_KEY_CHANNELS];
};

extern "C" {

void colorKeyTrackAdvanceRgb(ColorKeyEffect *effect);
void FUN_00285320(ColorKeyEffect *effect, u32 arg);
void FUN_002853ec(ColorKeyEffect *effect, u32 arg);
void FUN_002a65fc(ColorKeyEffect *effect, u32 arg);
void FUN_002a67d8(ColorKeyEffect *effect, u32 arg);
void FUN_002a66b8(ColorKeyEffect *effect, u32 arg);
void FUN_002c76fc(ColorKeyEffect *effect, u32 arg);
void FUN_002c781c(ColorKeyEffect *effect, u32 arg);
void FUN_002c793c(ColorKeyEffect *effect, u32 arg);
void FUN_00229264(f32 *output, f32 from, f32 to);

/* Advances each active channel of the colour-key effect by one frame: steps its values towards the
 * targets, or restarts it when its frame limit has passed. */
void FUN_00213fe4(ColorKeyEffect *effect, u32 arg)
{
    if (effect->mode[0] < 4) {
        effect->counter[0]++;
        if (effect->limit[0] < effect->counter[0]) {
            effect->counter[0] = 0;
            effect->param[0] = 0.0f;
            effect->param[1] = 0.0f;
            effect->param[2] = 0.0f;
            colorKeyTrackAdvanceRgb(effect);
        } else {
            FUN_00229264(&effect->value[0], effect->param[0], effect->target[0]);
            FUN_00229264(&effect->value[1], effect->param[1], effect->target[1]);
            FUN_00229264(&effect->value[2], effect->param[2], effect->target[2]);
        }
    }
    if (effect->mode[1] < 4) {
        effect->counter[1]++;
        if (effect->limit[1] < effect->counter[1]) {
            effect->counter[1] = 0;
            effect->param[3] = 0.0f;
            FUN_00285320(effect, arg);
        } else {
            FUN_00229264(&effect->value[3], effect->param[3], effect->target[3]);
        }
    }
    if (effect->mode[2] < 4) {
        effect->counter[2]++;
        if (effect->limit[2] < effect->counter[2]) {
            effect->counter[2] = 0;
            effect->param[4] = 0.0f;
            FUN_002853ec(effect, arg);
        } else {
            FUN_00229264(&effect->value[4], effect->param[4], effect->target[4]);
        }
    }
    if (effect->mode[3] < 4) {
        effect->counter[3]++;
        if (effect->limit[3] < effect->counter[3]) {
            effect->counter[3] = 0;
            effect->param[5] = 0.0f;
            FUN_002a65fc(effect, arg);
        } else {
            FUN_00229264(&effect->value[5], effect->param[5], effect->target[5]);
        }
    }
    if (effect->mode[4] < 4) {
        effect->counter[4]++;
        if (effect->limit[4] < effect->counter[4]) {
            effect->counter[4] = 0;
            effect->param[6] = 0.0f;
            FUN_002a67d8(effect, arg);
        } else {
            FUN_00229264(&effect->value[6], effect->param[6], effect->target[6]);
        }
    }
    if (effect->mode[5] < 4) {
        effect->counter[5]++;
        if (effect->limit[5] < effect->counter[5]) {
            effect->counter[5] = 0;
            effect->param[7] = 0.0f;
            FUN_002a66b8(effect, arg);
        } else {
            FUN_00229264(&effect->value[7], effect->param[7], effect->target[7]);
        }
    }
    if (effect->mode[6] < 4) {
        effect->counter[6]++;
        if (effect->limit[6] < effect->counter[6]) {
            effect->counter[6] = 0;
            effect->param[8] = 0.0f;
            FUN_002c76fc(effect, arg);
        } else {
            FUN_00229264(&effect->value[8], effect->param[8], effect->target[8]);
        }
    }
    if (effect->mode[7] < 4) {
        effect->counter[7]++;
        if (effect->limit[7] < effect->counter[7]) {
            effect->counter[7] = 0;
            effect->param[9] = 0.0f;
            FUN_002c781c(effect, arg);
        } else {
            FUN_00229264(&effect->value[9], effect->param[9], effect->target[9]);
        }
    }
    if (effect->mode[8] < 4) {
        effect->counter[8]++;
        if (effect->limit[8] < effect->counter[8]) {
            effect->counter[8] = 0;
            effect->param[10] = 0.0f;
            FUN_002c793c(effect, arg);
        } else {
            FUN_00229264(&effect->value[10], effect->param[10], effect->target[10]);
        }
    }
}

} /* extern "C" */
