/* NON_MATCHING: compiler merges repeated disabled checks and lays out mode branches differently than retail. */
#include "gfx/AnimationCompletion.h"

static __inline u32 animationSelectionFinished(const AnimationSelection *selection)
{
    if (selection->clip == NULL)
        return 1;
    if (selection->flags == 2) {
        if ((selection->clip->flags & 1) != 0)
            return 1;
    } else if (selection->flags == 1) {
        return 1;
    }
    if (selection->time < selection->clip->duration)
        return 0;
    return 1;
}

/* All three animation channels must finish; looping or disabled tracks are already complete. */
extern "C" u32 FUN_004ffba8(const AnimationCompletionWork *work)
{
    if ((work->flags & 2) == 0 && !animationSelectionFinished(&work->channels[work->current].selection))
        return 0;
    if ((work->flags & 2) == 0 && !animationSelectionFinished(&work->channels[2].selection))
        return 0;
    if ((work->flags & 2) == 0 && !animationSelectionFinished(&work->channels[3].selection))
        return 0;
    return 1;
}
