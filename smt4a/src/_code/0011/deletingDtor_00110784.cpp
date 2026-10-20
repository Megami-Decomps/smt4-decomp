#include "common.h"

extern "C" {

void *sharedRefInitEmpty(void *self);
void asdOperatorDeleteArray(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00110784(void *self)
{
    asdOperatorDeleteArray(sharedRefInitEmpty(self));
}

} /* extern "C" */
