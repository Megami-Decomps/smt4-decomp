#include "common.h"

extern "C" {

void *FUN_001117f6(void *self);
void operatorDelete(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void deletingDtor_001117ea(void *self)
{
    operatorDelete(FUN_001117f6(self));
}

} /* extern "C" */
