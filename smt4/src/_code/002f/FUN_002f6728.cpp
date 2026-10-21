#include "common.h"

namespace { struct Status { u8 padding[0x400]; u32 state; u32 previous; u32 unknown; u32 next; }; }

extern "C" {
/* Reads or updates the requested object state. */
extern Status *g_statusDown;
void FUN_002f6728(void)
{
    Status *status = g_statusDown;
    status->next = 0;
    status->previous = status->state;
    status->state = 3;
}
}
