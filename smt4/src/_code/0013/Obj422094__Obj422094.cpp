/* NON_MATCHING: vptr/state stores and the final mode initialization use different registers and scheduling. */
#include "classes/Obj422094.h"


/* Initializes the object's empty state and default mode. */
Obj422094::Obj422094()
{
    state = 0;
    first = 0;
    second = 0;
    count = 0;
    index = -1;
    mode = 6;
}
