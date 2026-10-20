#include "common.h"

extern "C" {

void *sharedRefHolderDestroy(void *self);
void asdOperatorDeleteArray(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_001037ac(void *self)
{
    asdOperatorDeleteArray(sharedRefHolderDestroy(self));
}

} /* extern "C" */
