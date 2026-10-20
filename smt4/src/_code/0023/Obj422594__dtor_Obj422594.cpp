#include "classes/Obj422594.h"

/* Removes every registered touch region. */
Obj422594::~Obj422594()
{
    for (int i = 0; i < region.touchCount; i++) {
        ifTouchRegionRemove();
    }
    region.touchCount = 0;
}
