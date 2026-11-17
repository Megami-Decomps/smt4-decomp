#include "status/StatusDown.h"

extern "C" {

void FUN_00215b40(u16 value)
{
    if (g_statusDown != NULL) {
        g_statusDown->selectedEntry = value;
    }
}

} /* extern "C" */
