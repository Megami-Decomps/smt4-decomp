#include "common.h"

extern "C" {

void FUN_00522bf4(void);

/* Runs FUN_00522bf4 and returns `object`. */
void *FUN_00303a2e(void *object)
{
    FUN_00522bf4();
    return object;
}

} /* extern "C" */
