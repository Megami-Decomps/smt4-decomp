#include "common.h"

extern "C" {

void *FUN_002ea0b8(void *self);
void FUN_002e6e14(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00110784(void *self)
{
    FUN_002e6e14(FUN_002ea0b8(self));
}

} /* extern "C" */
