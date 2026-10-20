#include "common.h"

extern "C" {

void *destroyObj0055b33c(void *self);
void asdOperatorDeleteArray(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00122c3a(void *self)
{
    asdOperatorDeleteArray(destroyObj0055b33c(self));
}

} /* extern "C" */
