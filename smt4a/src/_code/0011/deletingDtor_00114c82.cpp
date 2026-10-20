#include "common.h"

extern "C" {

void *FUN_00300860(void *self);
void FUN_002ea124(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00114c82(void *self)
{
    FUN_002ea124(FUN_00300860(self));
}

} /* extern "C" */
