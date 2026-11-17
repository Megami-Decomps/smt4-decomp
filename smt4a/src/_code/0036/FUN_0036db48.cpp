#include "ui/MessageMainA.h"

/* True when the message window is not busy. */
extern "C" s32 FUN_0036db48(void)
{
    return g_messageMain.banner->counterState == 0;
}
