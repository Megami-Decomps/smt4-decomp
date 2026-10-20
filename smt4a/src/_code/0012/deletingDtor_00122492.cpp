#include "common.h"

extern "C" {

void *FUN_002f4fd0(void *self);
void operatorDelete(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00122492(void *self)
{
    operatorDelete(FUN_002f4fd0(self));
}

} /* extern "C" */
