#include "common.h"

extern "C" {

extern u32 g_asdModelSlotFlags[];

/* Sets the active bit in model slot `slot`'s flag word. */
void asdModelSlotSetActive(s32 slot)
{
    g_asdModelSlotFlags[slot] |= 1;
}

} /* extern "C" */
