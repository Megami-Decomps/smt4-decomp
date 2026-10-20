#include "common.h"

extern "C" {

void *destroyObj00559e44(void *self);
void asdOperatorDeleteArray(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_0011734c(void *self)
{
    asdOperatorDeleteArray(destroyObj00559e44(self));
}

} /* extern "C" */
