#include "common.h"

extern "C" {

void *_ZN9Obj55af5cD1Ev(void *self);
void asdOperatorDeleteArray(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00122370(void *self)
{
    asdOperatorDeleteArray(_ZN9Obj55af5cD1Ev(self));
}

} /* extern "C" */
