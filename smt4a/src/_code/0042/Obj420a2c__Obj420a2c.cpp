/* NON_MATCHING: base-field/vptr stores and pointer post-increments differ from retail. */
#include "classes/Obj420a2c.h"

/* Starts with no owner, no sources and no handles. */
Obj420a2c::Obj420a2c() : sourceB(NULL)
{
    handles[0] = 0;
    handles[1] = 0;
    handles[2] = 0;
    unkA0 = 0;
}
