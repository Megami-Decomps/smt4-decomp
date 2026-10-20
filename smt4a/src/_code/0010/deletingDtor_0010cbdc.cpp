#include "common.h"

extern "C" {

void *FUN_002f67bc(void *self);
void FUN_002ea124(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_0010cbdc(void *self)
{
    FUN_002ea124(FUN_002f67bc(self));
}

} /* extern "C" */
