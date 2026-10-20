/* NON_MATCHING: same stores; retail writes the vtable address after the base's two fields and walks r0 with post-increments (`str r1, [r0], #12`), the compiler stores it before the second field and writes back (`[r0, #12]!`). */
#include "classes/Obj420a2c.h"

/* Starts with no owner, no sources and no handles. */
Obj420a2c::Obj420a2c()
    : sourceB(NULL)
{
    handles[0] = 0;
    handles[1] = 0;
    handles[2] = 0;
    unkA0 = 0;
}
