#include "common.h"

extern "C" {

void FUN_00117bc8(void);

/* Runs FUN_00117bc8 and returns `object`. */
void *FUN_00307c4a(void *object)
{
    FUN_00117bc8();
    return object;
}

} /* extern "C" */
