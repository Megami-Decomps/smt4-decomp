#include "common.h"

extern "C" {

void *FUN_002f4fd8(void *self);
void FUN_002e6e14(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_0010eee8(void *self)
{
    FUN_002e6e14(FUN_002f4fd8(self));
}

} /* extern "C" */
