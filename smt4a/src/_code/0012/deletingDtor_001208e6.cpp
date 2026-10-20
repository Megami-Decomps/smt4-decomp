#include "common.h"

extern "C" {

void *FUN_002eb7c0(void *self);
void asdOperatorDeleteArray(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_001208e6(void *self)
{
    asdOperatorDeleteArray(FUN_002eb7c0(self));
}

} /* extern "C" */
