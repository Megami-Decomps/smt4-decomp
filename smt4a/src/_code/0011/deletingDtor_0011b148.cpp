#include "common.h"

extern "C" {

void *FUN_00307140(void *self);
void FUN_002ea124(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_0011b148(void *self)
{
    FUN_002ea124(FUN_00307140(self));
}

} /* extern "C" */
