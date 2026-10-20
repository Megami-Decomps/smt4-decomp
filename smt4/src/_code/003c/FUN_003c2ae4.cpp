#include "common.h"

extern "C" {

extern u32 FUN_002b8cec(u32 button);

/* Button 4 or, when `alt` is set, also button 0xd. */
u32 FUN_003c2ae4(int alt)
{
    u32 pressed = FUN_002b8cec(4);

    if (alt != 0) {
        pressed = pressed | FUN_002b8cec(0xd);
    }
    return pressed;
}

} /* extern "C" */
