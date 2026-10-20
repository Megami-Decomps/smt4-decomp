#include "common.h"

extern "C" {

void *FUN_002eb728(void *self);
void asdOperatorDeleteArray(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_001052ee(void *self)
{
    asdOperatorDeleteArray(FUN_002eb728(self));
}

} /* extern "C" */
