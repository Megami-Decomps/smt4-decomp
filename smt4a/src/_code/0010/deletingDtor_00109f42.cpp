#include "common.h"

extern "C" {

void *destroyObj00558be8(void *self);
void asdOperatorDeleteArray(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00109f42(void *self)
{
    asdOperatorDeleteArray(destroyObj00558be8(self));
}

} /* extern "C" */
