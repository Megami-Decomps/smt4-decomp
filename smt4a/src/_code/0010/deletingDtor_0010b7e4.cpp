#include "common.h"

extern "C" {

void *FUN_002f4fd8(void *self);
void asdOperatorDeleteArray(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_0010b7e4(void *self)
{
    asdOperatorDeleteArray(FUN_002f4fd8(self));
}

} /* extern "C" */
