#include "common.h"

extern "C" {

void *FUN_002ea00c(void *self);
void FUN_002e6e14(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00103f8e(void *self)
{
    FUN_002e6e14(FUN_002ea00c(self));
}

} /* extern "C" */
