#include "common.h"

extern "C" {

void *FUN_002fba98(void *self);
void FUN_002e6e14(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00115c60(void *self)
{
    FUN_002e6e14(FUN_002fba98(self));
}

} /* extern "C" */
