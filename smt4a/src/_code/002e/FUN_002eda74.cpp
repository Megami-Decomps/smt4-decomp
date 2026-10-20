#include "common.h"

extern "C" {

void FUN_003105b0(void);

/* Runs FUN_003105b0 and returns `object`. */
void *FUN_002eda74(void *object)
{
    FUN_003105b0();
    return object;
}

} /* extern "C" */
