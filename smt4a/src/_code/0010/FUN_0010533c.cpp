#include "common.h"

extern "C" {

void *deletingDtor_002eb7c0(void *self);
void asdOperatorDeleteArray(void *self);

void FUN_0010533c(void *self)
{
    asdOperatorDeleteArray(deletingDtor_002eb7c0(self));
}

} /* extern "C" */
