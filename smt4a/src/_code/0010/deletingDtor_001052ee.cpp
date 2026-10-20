#include "common.h"

extern "C" {

void *FUN_002eb728(void *self);
void FUN_002e6e14(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_001052ee(void *self)
{
    FUN_002e6e14(FUN_002eb728(self));
}

} /* extern "C" */
