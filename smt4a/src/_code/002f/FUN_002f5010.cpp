#include "common.h"

extern "C" {

void rt_malloc(void);

/* Forwards to rt_malloc. */
void FUN_002f5010(void)
{
    rt_malloc();
}

} /* extern "C" */
