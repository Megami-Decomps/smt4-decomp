#include "common.h"

extern "C" {

void asdOperatorDelete(void *block);

/* Deleting destructor of an object with nothing to destroy: frees the block. */
void FUN_00408780(void *self)
{
    asdOperatorDelete(self);
}

} /* extern "C" */
