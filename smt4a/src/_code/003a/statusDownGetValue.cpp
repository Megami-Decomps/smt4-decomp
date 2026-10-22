#include "status/StatusDown.h"

extern "C" {
extern StatusDownStateA *g_statusDown;

/* The status-down object's value word, or 0 while there is none. */
u32 statusDownGetValue(void)
{
    return g_statusDown != NULL ? g_statusDown->value249c : 0;
}

} /* extern "C" */
