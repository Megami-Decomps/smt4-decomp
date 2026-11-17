#include "status/StatusDownA.h"

extern "C" {

/* The status-down object's value word, or 0 while there is none. */
u32 statusDownGetValue(void)
{
    return g_statusDown != NULL ? g_statusDown->value : 0;
}

} /* extern "C" */
