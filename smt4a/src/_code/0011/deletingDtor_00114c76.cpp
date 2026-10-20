#include "common.h"

extern "C" {

void *FUN_002fb028(void *self);
void operatorDelete(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00114c76(void *self)
{
    operatorDelete(FUN_002fb028(self));
}

} /* extern "C" */
