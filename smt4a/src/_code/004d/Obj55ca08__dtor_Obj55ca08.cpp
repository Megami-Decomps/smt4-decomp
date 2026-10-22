#include "classes/Obj55ca08.h"

extern "C" int ifTouchRegionRemove();

/* Removes every touch region registered by this selection interface. */
Obj55ca08::~Obj55ca08()
{
    for (int index = 0; index < touchCount; ++index) {
        ifTouchRegionRemove();
    }
    touchCount = 0;
}
