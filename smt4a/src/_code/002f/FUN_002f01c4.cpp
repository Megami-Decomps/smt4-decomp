#include "status/StatusDownA.h"

extern "C" {

/* Stores `value` in the halfword at 0x598 of the scene at 0x588FE8, if there is one. */
void FUN_002f01c4(u16 value)
{
    if (g_statusDown != NULL) {
        g_statusDown->selectedEntry = value;
    }
}

} /* extern "C" */
