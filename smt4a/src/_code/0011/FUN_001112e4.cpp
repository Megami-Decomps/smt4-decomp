#include "common.h"

extern "C" {

void *FUN_001112f0(void *self);
void asdOperatorDeleteArray(void *self);

void FUN_001112e4(void *self)
{
    asdOperatorDeleteArray(FUN_001112f0(self));
}

} /* extern "C" */
