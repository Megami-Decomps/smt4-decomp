#include "common.h"

extern "C" {

void *FUN_002fa0f4(void *self);
void asdOperatorDeleteArray(void *self);

void FUN_001154f8(void *self)
{
    asdOperatorDeleteArray(FUN_002fa0f4(self));
}

} /* extern "C" */
