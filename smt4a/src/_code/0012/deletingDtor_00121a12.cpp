#include "common.h"

extern "C" {

void *FUN_002f4f00(void *self);
void FUN_002e6e14(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00121a12(void *self)
{
    FUN_002e6e14(FUN_002f4f00(self));
}

} /* extern "C" */
