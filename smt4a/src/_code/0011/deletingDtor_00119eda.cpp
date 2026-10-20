#include "common.h"

extern "C" {

void *FUN_002fd374(void *self);
void operatorDelete(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00119eda(void *self)
{
    operatorDelete(FUN_002fd374(self));
}

} /* extern "C" */
