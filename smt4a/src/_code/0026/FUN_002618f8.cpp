#include "ui/IfTouch.h"

extern "C" {

/* Returns the difference of the 16-bit values at 0x660 and 0x658 of the record at 0x57F248. */
s32 FUN_002618f8(void)
{
    return (s16)((s16)g_ifTouch.state->unk660 - (s16)g_ifTouch.state->unk658);
}

} /* extern "C" */
