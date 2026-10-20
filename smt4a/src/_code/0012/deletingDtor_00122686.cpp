#include "common.h"

extern "C" {

void *sharedRefHolderDestroy2(void *self);
void asdOperatorDeleteArray(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00122686(void *self)
{
    asdOperatorDeleteArray(sharedRefHolderDestroy2(self));
}

} /* extern "C" */
