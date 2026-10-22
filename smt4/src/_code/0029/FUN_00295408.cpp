#include "status/StatusDown.h"

extern "C" {
extern StatusDownState *g_statusDown;

u32 FUN_00295408(void)
{
    return g_statusDown->unk53C;
}

} /* extern "C" */
