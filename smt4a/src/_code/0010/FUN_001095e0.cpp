#include "common.h"

extern "C" {

void *FUN_001095ec(void *self);
void asdOperatorDeleteArray(void *self);

void FUN_001095e0(void *self)
{
    asdOperatorDeleteArray(FUN_001095ec(self));
}

} /* extern "C" */
