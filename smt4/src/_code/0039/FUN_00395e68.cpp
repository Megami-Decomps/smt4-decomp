#include "common.h"

extern "C" {

void asdMemFreeNonNull(void *block);

/* Deleting destructor of an object with nothing to destroy: frees the block. */
void FUN_00395e68(void *self)
{
    asdMemFreeNonNull(self);
}

} /* extern "C" */
