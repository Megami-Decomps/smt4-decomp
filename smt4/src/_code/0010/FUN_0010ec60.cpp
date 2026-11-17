#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" {
/* Returns the frame interval (vertical blanks per frame, minus one). */
u32 FUN_0010ec60(void)
{
    return g_asdGxPresets.interval;
}

} /* extern "C" */
