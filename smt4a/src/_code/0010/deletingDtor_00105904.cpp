#include "common.h"

extern "C" {

void *FUN_002ec70c(void *self);
void asdOperatorDeleteArray(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00105904(void *self)
{
    asdOperatorDeleteArray(FUN_002ec70c(self));
}

} /* extern "C" */
