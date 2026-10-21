#include "common.h"

extern "C" {
extern u32 g_aocDisplay;
u32 FUN_0047219c(u32 display);

/* Runs the display operation using the active display. */
u32 FUN_00470704()
{
    return FUN_0047219c(g_aocDisplay);
}
}
