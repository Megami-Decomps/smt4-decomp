#include "status/StatusDown.h"

extern "C" {
extern StatusDownState *g_statusDown;

void FUN_002efed8(u8 value)
{
    if (g_statusDown != NULL) {
        g_statusDown->unk411 = value;
    }
}

} /* extern "C" */
