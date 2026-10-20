#include "common.h"

extern "C" {

void *FUN_002f4f00(void *self);
void asdOperatorDeleteArray(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00121a12(void *self)
{
    asdOperatorDeleteArray(FUN_002f4f00(self));
}

} /* extern "C" */
