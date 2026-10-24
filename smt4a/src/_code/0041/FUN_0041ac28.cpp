#include "common.h"

extern "C" {

int asdMemFree(void *block);

/* Virtual slot that releases its second argument. */
void FUN_0041ac28(void *self, void *block)
{
    asdMemFree(block);
}

} /* extern "C" */
