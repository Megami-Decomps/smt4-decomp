#include "common.h"

extern "C" {

void asdOperatorDeleteC(void *self);

void FUN_001289ec(void *unused, void *self)
{
    asdOperatorDeleteC(self);
}

} /* extern "C" */
