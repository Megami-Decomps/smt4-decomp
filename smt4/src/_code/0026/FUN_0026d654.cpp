#include "status/StatusDown.h"

extern "C" {
extern StatusDownState *g_statusDown;

void FUN_0026d654(u8 value)
{
    if (g_statusDown != NULL) {
        g_statusDown->unk2392 = value;
    }
}

} /* extern "C" */
