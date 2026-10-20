#include "common.h"

extern "C" {

void *FUN_002f42ec(void *self);
void operatorDelete(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_0010b188(void *self)
{
    operatorDelete(FUN_002f42ec(self));
}

} /* extern "C" */
