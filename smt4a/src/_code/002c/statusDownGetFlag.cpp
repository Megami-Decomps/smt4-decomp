#include "status/StatusDownA.h"

extern "C" {


/* Returns the status screen's current tab. */
u8 statusDownGetFlag(void)
{
    return g_statusDown->tab;
}

} /* extern "C" */
