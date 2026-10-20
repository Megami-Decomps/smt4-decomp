#include "common.h"

extern "C" {

void *FUN_00115ad0(void *self);
void asdOperatorDeleteArray(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00115ac4(void *self)
{
    asdOperatorDeleteArray(FUN_00115ad0(self));
}

} /* extern "C" */
