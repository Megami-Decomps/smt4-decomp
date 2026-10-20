#include "common.h"

extern "C" {

void *FUN_0030e8ec(void *self);
void FUN_002e3328(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00124b74(void *self)
{
    FUN_002e3328(FUN_0030e8ec(self));
}

} /* extern "C" */
