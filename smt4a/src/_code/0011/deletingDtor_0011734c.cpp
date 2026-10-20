#include "common.h"

extern "C" {

void *destroyObj00559e44(void *self);
void FUN_002e6e14(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_0011734c(void *self)
{
    FUN_002e6e14(destroyObj00559e44(self));
}

} /* extern "C" */
