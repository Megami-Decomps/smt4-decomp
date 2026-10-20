#include "common.h"

extern "C" {

extern u32 FUN_002bfde4(u32 button);

/* Button 6 or, when `alt` is set, also button 0xf. */
u32 FUN_003c2b44(int alt)
{
    u32 pressed = FUN_002bfde4(6);

    if (alt != 0) {
        pressed = pressed | FUN_002bfde4(0xf);
    }
    return pressed;
}

} /* extern "C" */
