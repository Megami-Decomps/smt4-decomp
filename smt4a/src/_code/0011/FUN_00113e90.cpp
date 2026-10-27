#include "common.h"

extern "C" {

void *FUN_00113e9c(void *self);
void asdOperatorDeleteArray(void *self);

void FUN_00113e90(void *self)
{
    asdOperatorDeleteArray(FUN_00113e9c(self));
}

} /* extern "C" */
