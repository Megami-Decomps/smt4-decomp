#include "common.h"

extern "C" {

extern u32 FUN_002bfde4(u32 button);

/* Button 5 or, when `alt` is set, also button 0xe. */
u32 FUN_003c2a84(int alt)
{
    u32 pressed = FUN_002bfde4(5);

    if (alt != 0) {
        pressed = pressed | FUN_002bfde4(0xe);
    }
    return pressed;
}

} /* extern "C" */
