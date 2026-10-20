#include "common.h"

extern "C" {

void *FUN_002f67bc(void *self);
void operatorDelete(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_0010cbdc(void *self)
{
    operatorDelete(FUN_002f67bc(self));
}

} /* extern "C" */
