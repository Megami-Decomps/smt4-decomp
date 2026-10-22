/* NON_MATCHING: the shared class delete hook calls asdMemFreeNonNull; retail uses asdOperatorDelete in this game. */
#include "classes/Obj422594.h"

/* Remove registered touch regions, then let the deleting variant free storage. */
Obj422594::~Obj422594()
{
    for (s32 i = 0; i < region.touchCount; ++i) {
        ifTouchRegionRemove();
    }
    region.touchCount = 0;
}
