#include "common.h"

extern "C" {

int asdMemFree(void *block);

/* Deleting destructor of an object with nothing to destroy: frees the block. */
void FUN_00302490(void *self)
{
    asdMemFree(self);
}

} /* extern "C" */
