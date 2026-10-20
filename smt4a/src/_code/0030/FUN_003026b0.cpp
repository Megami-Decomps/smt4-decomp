#include "common.h"

extern "C" {

void FUN_002e75c2(void);

/* Runs FUN_002e75c2 and returns `object`. */
void *FUN_003026b0(void *object)
{
    FUN_002e75c2();
    return object;
}

} /* extern "C" */
