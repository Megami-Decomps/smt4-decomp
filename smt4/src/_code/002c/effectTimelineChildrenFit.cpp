#include "AsdSDK/Source/Gfx/Effect/EffectTimeline.h"

extern "C" {

/* Checks that every child of the part has a known, nonzero duration that ends within the part's
 * own duration. */
u32 effectTimelineChildrenFit(const EffectTimelinePart *part)
{
    s32 longest = effectTimelineChildrenEnd(part);
    if (longest == 0 || part->duration < longest) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
