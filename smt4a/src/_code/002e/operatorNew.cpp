#include "common.h"

extern "C" {

void rt_malloc(void);

/* Forwards to rt_malloc. */
void operatorNew(void)
{
    rt_malloc();
}

} /* extern "C" */
