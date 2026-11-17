#include "status/StatusDown.h"

extern "C" {
/* Reads or forwards the current state. */
s32 statusDownGetValue(void)
{
    return g_statusDown != NULL ? g_statusDown->value : 0;
}
}
