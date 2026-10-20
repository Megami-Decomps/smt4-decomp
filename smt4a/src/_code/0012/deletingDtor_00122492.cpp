#include "common.h"

extern "C" {

void *FUN_002f4fd0(void *self);
void FUN_002ea124(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00122492(void *self)
{
    FUN_002ea124(FUN_002f4fd0(self));
}

} /* extern "C" */
