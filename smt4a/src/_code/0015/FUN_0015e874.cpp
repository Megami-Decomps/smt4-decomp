/* NON_MATCHING: float scheduling only: retail loads the 0.0f constant into s1 before the push and clamps s0 in place before copying it to s16; built copies to s16 first and clamps there. */
#include "common.h"

extern "C" {

typedef struct FadeState {
    /* 0x0 */ f32 start;
    /* 0x4 */ f32 target;
    /* 0x8 */ u32 id;
    /* 0xC */ u32 elapsed;
} FadeState;

typedef struct Fader {
    /* 0x00 */ u8 unk00[0xB8];
    /* 0xB8 */ FadeState fade;
} Fader;

f32 FUN_0017fc38(f32 *value);

/* Starts a fade from the current value to `target` (clamped to 0 or more) with the given id. */
void FUN_0015e874(Fader *fader, u32 id, f32 target)
{
    FadeState *fade = &fader->fade;

    if (target < 0.0f) {
        target = 0.0f;
    }
    fade->start = FUN_0017fc38(&fade->start);
    fade->target = target;
    fade->id = id;
    fade->elapsed = 0;
}

} /* extern "C" */
