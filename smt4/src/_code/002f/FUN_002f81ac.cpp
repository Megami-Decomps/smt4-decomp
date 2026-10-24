#include "common.h"

extern "C" {

void asdMemFree(void *block);

/* Releases the sample buffer. */
void FUN_002f81ac(void *samples)
{
    asdMemFree(samples);
}

} /* extern "C" */
