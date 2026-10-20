#include "common.h"

extern "C" {

void *strDestroy(void *self);
void asdOperatorDeleteArray(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00105d20(void *self)
{
    asdOperatorDeleteArray(strDestroy(self));
}

} /* extern "C" */
