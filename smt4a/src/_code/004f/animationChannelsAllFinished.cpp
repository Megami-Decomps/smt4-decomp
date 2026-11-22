/* NON_MATCHING: 44 lines (68 vs 68 rows); three channel checks and mode branches match retail, remaining: work->current load precedes first disabled check and selection/clip registers swap (r1/r2). */
#include "gfx/AnimationCompletion.h"

/* Same completion test as sibling animationIsClipComplete (called for all three channels here). */
static bool animationChannelFinished(const AnimationCompletionWork *work, s32 index)
{
    if (work->flags & 2)
        return true;
    const AnimationSelection *selection = &work->channels[index].selection;
    AnimationClip *clip = selection->clip;
    if (clip == NULL)
        return true;
    if (selection->flags != 2) {
        if (selection->flags == 1)
            return true;
    } else if (clip->flags & 1) {
        return true;
    }
    return selection->time >= clip->duration;
}

/* All three animation channels must finish; looping or disabled tracks are already complete. */
extern "C" u32 animationChannelsAllFinished(const AnimationCompletionWork *work)
{
    if (!animationChannelFinished(work, work->current))
        return 0;
    if (!animationChannelFinished(work, 2))
        return 0;
    if (!animationChannelFinished(work, 3))
        return 0;
    return 1;
}
