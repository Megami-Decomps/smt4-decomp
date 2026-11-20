#include "common.h"

extern "C" {

void *destroyObj005585a4(void *self);
void asdOperatorDeleteArray(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00103f8e(void *self)
{
    asdOperatorDeleteArray(destroyObj005585a4(self));
}

} /* extern "C" */
