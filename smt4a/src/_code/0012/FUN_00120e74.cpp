#include "common.h"

extern "C" {

void *FUN_00120e80(void *self);
void asdOperatorDeleteArray(void *self);

void FUN_00120e74(void *self)
{
    asdOperatorDeleteArray(FUN_00120e80(self));
}

} /* extern "C" */
