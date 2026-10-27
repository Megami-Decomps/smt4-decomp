#include "common.h"

extern "C" {

void *FUN_00121e38(void *self);
void asdOperatorDeleteArray(void *self);

void FUN_00121e2c(void *self)
{
    asdOperatorDeleteArray(FUN_00121e38(self));
}

} /* extern "C" */
