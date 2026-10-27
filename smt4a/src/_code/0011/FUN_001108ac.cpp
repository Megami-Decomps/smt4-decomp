#include "common.h"

extern "C" {

void *FUN_001108b8(void *self);
void asdOperatorDeleteArray(void *self);

void FUN_001108ac(void *self)
{
    asdOperatorDeleteArray(FUN_001108b8(self));
}

} /* extern "C" */
