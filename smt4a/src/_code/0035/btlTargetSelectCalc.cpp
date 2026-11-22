/* NON_MATCHING: the two enable stores use r0/r1 the other way round from retail (retail loads the target before testing the code and materialises the flag moveq-first). */
#include "ui/UiSpriteApi.h"
#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "shard/JobWork.h"

extern "C" {
s32 FUN_0040898c(JobAnimationTargetPrefixA *target);
}

/* Advances the animated sprite, enables its target and parameters unless the code is 0x71, and steps the mode-2 phase (wrapping at 30) and angle (wrapping at 360). */
extern "C" u32 btlTargetSelectCalc(u32 process)
{
    JobAnimationWorkPrefixA *work = (JobAnimationWorkPrefixA *)jobGetWork(process);
    uiSpriteAdvanceAnimation((UiSpriteState *)work->unk2C, 1.0f);

    u32 code = work->code;
    work->target->enabled = code != 0x71;
    work->animation->enabled = code != 0x71;

    switch (work->mode) {
    case 0:
        break;
    case 1:
        FUN_0040898c(work->target);
        break;
    case 2: {
        JobAnimationParametersPrefixA *animation = work->animation;
        animation->phase += 1.0f;
        if (animation->phase >= 30.0f)
            animation->phase -= 30.0f;

        animation->angle += 12.0f;
        if (animation->angle > 360.0f)
            animation->angle -= 360.0f;
        break;
    }
    default:
        break;
    }
    return 0;
}
