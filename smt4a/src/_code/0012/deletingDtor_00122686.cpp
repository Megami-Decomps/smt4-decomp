#include "common.h"

extern "C" {

void *FUN_002ee54c(void *self);
void FUN_002e6e14(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00122686(void *self)
{
    FUN_002e6e14(FUN_002ee54c(self));
}

} /* extern "C" */
