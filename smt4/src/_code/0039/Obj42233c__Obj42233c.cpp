#include "classes/Obj42233c.h"
#include <stddef.h>

/* Constructs the base with its argument set to 1, stores the vtable and clears the extra state. */
Obj42233c::Obj42233c()
    : Obj422318(1)
{
    typedef char TailLayoutCheck[offsetof(Obj42233c, flag) == 0x74 &&
        offsetof(Obj42233c, words) == 0x78 && offsetof(Obj42233c, frames) == 0x58 ? 1 : -1];
    flag = 0;
    words[0] = 0;
    words[1] = 0;
    words[2] = 0;
    words[3] = 0;
    words[4] = 0;
    words[5] = 0;
    frames = -1;
}
