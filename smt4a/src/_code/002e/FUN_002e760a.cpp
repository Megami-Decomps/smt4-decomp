#include "common.h"

extern "C" {

void rt_malloc(void);

/* Forwards to rt_malloc. */
void FUN_002e760a(void)
{
    rt_malloc();
}

} /* extern "C" */
