#include "common.h"

extern "C" {

void *FUN_00124ba0(void *self);
void asdOperatorDelete(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00124b94(void *self)
{
    asdOperatorDelete(FUN_00124ba0(self));
}

} /* extern "C" */
