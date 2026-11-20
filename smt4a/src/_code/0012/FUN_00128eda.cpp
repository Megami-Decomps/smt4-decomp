#include "common.h"

extern "C" {

void *deletingDtor_002eb7c0(void *self);
void asdOperatorDeleteArray(void *self);

void FUN_00128eda(void *self)
{
    asdOperatorDeleteArray(deletingDtor_002eb7c0(self));
}

} /* extern "C" */
