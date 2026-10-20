#include "common.h"

extern "C" {

void *FUN_002e4e92(void *self);
void FUN_002e3494(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_002e56ec(void *self)
{
    FUN_002e3494(FUN_002e4e92(self));
}

} /* extern "C" */
