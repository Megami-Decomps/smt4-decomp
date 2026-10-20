#include "common.h"

extern "C" {

void FUN_00135804(void);

/* Runs FUN_00135804 and returns `object`. */
void *FUN_002ff8a8(void *object)
{
    FUN_00135804();
    return object;
}

} /* extern "C" */
