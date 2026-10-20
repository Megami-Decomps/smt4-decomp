#include "common.h"

extern "C" {

typedef struct EffectInstance {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2c */ s32 frame; /* current frame of the effect's animation */
} EffectInstance;

extern s32 effGetFrameStep(void);
extern void FUN_002b437c(EffectInstance *effect);

/* Advances the effect's frame counter by this frame's step, then updates it (FUN_002b437c). */
void FUN_002b4358(EffectInstance *effect)
{
    effect->frame += effGetFrameStep();
    FUN_002b437c(effect);
}

} /* extern "C" */
