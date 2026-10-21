#include "common.h"

extern "C" {

void asdMemFree(void *block);

void uiFreeCallback(void *block)
{
    asdMemFree(block);
}

} /* extern "C" */
