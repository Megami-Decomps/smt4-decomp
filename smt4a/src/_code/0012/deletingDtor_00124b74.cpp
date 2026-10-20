#include "common.h"

extern "C" {

void *FUN_0030e8ec(void *self);
void asdOperatorDelete(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00124b74(void *self)
{
    asdOperatorDelete(FUN_0030e8ec(self));
}

} /* extern "C" */
