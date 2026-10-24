#include "common.h"

struct FrameCounter {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2c */ s32 frames;
};

extern "C" {

s32 effGetFrameStep(void);

/* Advances the effect's frame counter by the current frame step. */
void FUN_002b42b4(FrameCounter *effect)
{
    effect->frames += effGetFrameStep();
}

} /* extern "C" */
