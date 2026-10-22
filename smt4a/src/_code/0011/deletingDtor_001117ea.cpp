#include "classes/Obj55952c.h"

/* Retail consumes the destructor's returned owner; a native call adds save/restores. */
extern "C" void *_ZN9Obj55952cD1Ev(void *self);
#include "common.h"

extern "C" {

void operatorDelete(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_001117ea(void *self)
{
    operatorDelete(_ZN9Obj55952cD1Ev(self));
}

} /* extern "C" */
