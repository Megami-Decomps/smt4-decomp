#include "common.h"

extern "C" {

void *_ZN9Obj5593b8D1Ev(void *self);
void asdOperatorDeleteArray(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_00110784(void *self)
{
    asdOperatorDeleteArray(_ZN9Obj5593b8D1Ev(self));
}

} /* extern "C" */
