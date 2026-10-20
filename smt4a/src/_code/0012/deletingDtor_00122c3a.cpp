#include "common.h"

extern "C" {

void *destroyObj0055b33c(void *self);
void FUN_002e6e14(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00122c3a(void *self)
{
    FUN_002e6e14(destroyObj0055b33c(self));
}

} /* extern "C" */
