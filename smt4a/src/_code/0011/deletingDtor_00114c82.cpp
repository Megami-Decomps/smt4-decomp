#include "common.h"

extern "C" {

void *FUN_00300860(void *self);
void operatorDelete(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00114c82(void *self)
{
    operatorDelete(FUN_00300860(self));
}

} /* extern "C" */
