#include "common.h"
#include "code/Code003c_Smt4.h"

extern "C" {

extern u32 padIsButtonRepeat(u32 button);

/* Button 6 or, when `alt` is set, also button 0xf. */
u32 FUN_003c2ab4(int alt)
{
    u32 pressed = padIsButtonRepeat(6);

    if (alt != 0) {
        pressed = pressed | padIsButtonRepeat(0xf);
    }
    return pressed;
}

} /* extern "C" */
