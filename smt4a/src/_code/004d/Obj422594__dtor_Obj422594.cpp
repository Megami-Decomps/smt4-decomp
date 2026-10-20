#include "classes/Obj422594.h"

/* Removes every touch region it registered. */
Obj422594::~Obj422594()
{
    for (s32 i = 0; i < region.touchCount; i++) {
        ifTouchRegionRemove();
    }
    region.touchCount = 0;
}
