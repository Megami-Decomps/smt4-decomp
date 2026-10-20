#include "common.h"

extern "C" {

void *destroyObj0055ae64(void *self);
void asdOperatorDeleteArray(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_001208f2(void *self)
{
    asdOperatorDeleteArray(destroyObj0055ae64(self));
}

} /* extern "C" */
