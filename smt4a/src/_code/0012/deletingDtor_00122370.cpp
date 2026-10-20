#include "common.h"

extern "C" {

void *FUN_00301590(void *self);
void asdOperatorDeleteArray(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00122370(void *self)
{
    asdOperatorDeleteArray(FUN_00301590(self));
}

} /* extern "C" */
