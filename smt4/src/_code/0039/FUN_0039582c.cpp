#include "common.h"

extern "C" {

void asdMemFreeNonNull(void *block);

/* Releases a block that is known to be allocated. */
void FUN_0039582c(void *block)
{
    asdMemFreeNonNull(block);
}

} /* extern "C" */
