#include "status/StatusDown.h"

extern "C" {
extern StatusDownState *g_statusDown;
/* Reads or updates the requested object state. */

void FUN_002f6728(void)
{
    StatusDownState *status = g_statusDown;
    status->unk40C = 0;
    status->previousState = status->state;
    status->state = 3;
}
}
