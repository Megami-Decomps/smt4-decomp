#include "common.h"

extern "C" {

void asdMemFree(void *block);

/* Virtual release hook: frees the block passed in. */
void FUN_0034b17c(void *self, void *block)
{
    asdMemFree(block);
}

} /* extern "C" */
