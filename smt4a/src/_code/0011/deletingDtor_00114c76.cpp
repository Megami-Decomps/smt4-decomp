#include "common.h"

extern "C" {

void *FUN_002fb028(void *self);
void FUN_002ea124(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00114c76(void *self)
{
    FUN_002ea124(FUN_002fb028(self));
}

} /* extern "C" */
