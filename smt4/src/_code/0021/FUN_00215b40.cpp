#include "status/StatusDown.h"

extern "C" {
extern StatusDownState *g_statusDown;

void FUN_00215b40(u16 value)
{
    if (g_statusDown != NULL) {
        g_statusDown->unk47E = value;
    }
}

} /* extern "C" */
