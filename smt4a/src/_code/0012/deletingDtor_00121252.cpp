#include "common.h"

extern "C" {

void *strDestroy(void *self);
void FUN_002e6e14(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00121252(void *self)
{
    FUN_002e6e14(strDestroy(self));
}

} /* extern "C" */
