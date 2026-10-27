#include "common.h"

extern "C" {

void *FUN_001054f8(void *self);
void asdOperatorDeleteArray(void *self);

void FUN_001054ec(void *self)
{
    asdOperatorDeleteArray(FUN_001054f8(self));
}

} /* extern "C" */
