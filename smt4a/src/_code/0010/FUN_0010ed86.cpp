#include "common.h"

extern "C" {

void *deletingDtor_002ecac4(void *self);
void asdOperatorDeleteArray(void *self);

void FUN_0010ed86(void *self)
{
    asdOperatorDeleteArray(deletingDtor_002ecac4(self));
}

} /* extern "C" */
