#include "common.h"
#include "code/Code003c.h"

extern "C" {

extern u32 padIsButtonRepeat(u32 button);

/* Button 5 or, when `alt` is set, also button 0xe. */
u32 FUN_003c2a54(int alt)
{
    u32 pressed = padIsButtonRepeat(5);

    if (alt != 0) {
        pressed = pressed | padIsButtonRepeat(0xe);
    }
    return pressed;
}

} /* extern "C" */
