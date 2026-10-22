#include "classes/Obj5586e0.h"
#include "common.h"

extern "C" {

void *_ZN9Obj5586e0D1Ev(void *self); /* Native calls preserve this instead of forwarding r0. */
void asdOperatorDeleteArray(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_001052ee(void *self)
{
    asdOperatorDeleteArray(_ZN9Obj5586e0D1Ev(self));
}

} /* extern "C" */
