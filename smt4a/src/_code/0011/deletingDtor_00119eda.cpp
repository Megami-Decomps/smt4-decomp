#include "common.h"

extern "C" {

void *FUN_002fd374(void *self);
void FUN_002ea124(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00119eda(void *self)
{
    FUN_002ea124(FUN_002fd374(self));
}

} /* extern "C" */
