#include "common.h"

extern "C" {

void *FUN_002f31cc(void *self);
void asdOperatorDeleteArray(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_0010a036(void *self)
{
    asdOperatorDeleteArray(FUN_002f31cc(self));
}

} /* extern "C" */
