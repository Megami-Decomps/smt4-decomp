#include "common.h"

extern "C" {

void asdMemFree(void *block);

void engineFreeCallback(void *block)
{
    asdMemFree(block);
}

} /* extern "C" */
