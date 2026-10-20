#include "common.h"

extern "C" {

void *FUN_002eb624(void *self);
void asdOperatorDeleteArray(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_0010d2b0(void *self)
{
    asdOperatorDeleteArray(FUN_002eb624(self));
}

} /* extern "C" */
