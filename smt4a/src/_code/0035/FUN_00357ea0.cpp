/* NON_MATCHING: Shared-enable materialization, the mode-zero fast branch, and float-bit comparison registers differ. */
#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "shard/JobWork.h"

extern "C" {
s32 FUN_00163aa4(void *state, f32 step);
s32 FUN_0040898c(JobAnimationTargetPrefixA *target);
}

// The retail code compares signed representations, not converted integers.
static s32 floatRepresentation(f32 value)
{
    union {
        f32 value;
        s32 bits;
    } representation;
    representation.value = value;
    return representation.bits;
}

extern "C" u32 FUN_00357ea0(u32 process)
{
    JobAnimationWorkPrefixA *work = (JobAnimationWorkPrefixA *)jobGetWork(process);
    FUN_00163aa4(work->unk2C, 1.0f);

    const bool enabled = (work->code != 0x71);
    work->target->enabled = enabled;
    work->animation->enabled = enabled;

    switch (work->mode) {
    case 1:
        FUN_0040898c(work->target);
        break;
    case 2: {
        JobAnimationParametersPrefixA *animation = work->animation;
        animation->phase += 1.0f;
        if (floatRepresentation(animation->phase) >= 0x41f00000)
            animation->phase -= 30.0f;

        animation->angle += 12.0f;
        if (floatRepresentation(animation->angle) > 0x43b40000)
            animation->angle -= 360.0f;
        break;
    }
    default:
        break;
    }
    return 0;
}
