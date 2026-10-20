#include "common.h"

extern "C" {

extern u32 FUN_002b8cec(u32 button);

/* Button 3 or, when `alt` is set, also button 0xc. */
u32 FUN_003c2b14(int alt)
{
    u32 pressed = FUN_002b8cec(3);

    if (alt != 0) {
        pressed = pressed | FUN_002b8cec(0xc);
    }
    return pressed;
}

} /* extern "C" */
