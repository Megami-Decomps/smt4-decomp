#include "status/StatusDown.h"

extern "C" {
extern StatusDownState *g_statusDown;

void FUN_00317e34(void)
{
    if (g_statusDown != NULL) {
        g_statusDown->unk2391 = 1;
    }
}

} /* extern "C" */
