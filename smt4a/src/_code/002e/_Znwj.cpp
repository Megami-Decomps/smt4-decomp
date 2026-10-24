#include "common.h"

extern "C" {

void rt_malloc(void);

/* Forwards to rt_malloc. */
void _Znwj(void)
{
    rt_malloc();
}

} /* extern "C" */
