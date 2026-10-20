#include "common.h"

extern "C" {

void *FUN_002f31cc(void *self);
void FUN_002e6e14(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_0010a036(void *self)
{
    FUN_002e6e14(FUN_002f31cc(self));
}

} /* extern "C" */
