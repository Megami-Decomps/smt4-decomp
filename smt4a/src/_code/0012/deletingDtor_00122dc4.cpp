#include "common.h"

extern "C" {

void *FUN_0010b588(void *self);
void FUN_002e6e14(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00122dc4(void *self)
{
    FUN_002e6e14(FUN_0010b588(self));
}

} /* extern "C" */
