#include "status/StatusDown.h"

extern "C" {
/* Reads or forwards the current state. */

s32 FUN_00293b8c(void)
{
    return g_statusDown != NULL ? g_statusDown->unk481 : 0;
}
}
