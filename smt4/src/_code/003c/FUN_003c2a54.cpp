#include "common.h"

extern "C" {

extern u32 FUN_002b8cec(u32 button);

/* Button 5 or, when `alt` is set, also button 0xe. */
u32 FUN_003c2a54(int alt)
{
    u32 pressed = FUN_002b8cec(5);

    if (alt != 0) {
        pressed = pressed | FUN_002b8cec(0xe);
    }
    return pressed;
}

} /* extern "C" */
