#include "common.h"

extern "C" {

typedef struct EffectInstance {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2c */ s32 frame; /* current frame of the effect's animation */
} EffectInstance;

extern s32 effGetFrameStep(void);
extern void effEmitterUpdate(EffectInstance *effect);

/* Advances the effect's frame counter by this frame's step, then updates it (effEmitterUpdate). */
void effInstanceAdvanceFrame(EffectInstance *effect)
{
    effect->frame += effGetFrameStep();
    effEmitterUpdate(effect);
}

} /* extern "C" */
