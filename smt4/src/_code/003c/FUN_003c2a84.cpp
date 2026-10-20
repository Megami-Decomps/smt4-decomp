#include "common.h"

extern "C" {

extern u32 padIsButtonPressed(u32 button);

/* Button 5 or, when `alt` is set, also button 0xe. */
u32 FUN_003c2a84(int alt)
{
    u32 pressed = padIsButtonPressed(5);

    if (alt != 0) {
        pressed = pressed | padIsButtonPressed(0xe);
    }
    return pressed;
}

} /* extern "C" */
