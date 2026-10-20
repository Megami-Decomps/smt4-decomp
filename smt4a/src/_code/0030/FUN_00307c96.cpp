#include "common.h"

extern "C" {

void FUN_001178e2(void);

/* Runs FUN_001178e2 and returns `object`. */
void *FUN_00307c96(void *object)
{
    FUN_001178e2();
    return object;
}

} /* extern "C" */
