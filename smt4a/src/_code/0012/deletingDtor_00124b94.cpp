#include "common.h"

extern "C" {

void *FUN_00124ba0(void *self);
void FUN_002e3328(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00124b94(void *self)
{
    FUN_002e3328(FUN_00124ba0(self));
}

} /* extern "C" */
