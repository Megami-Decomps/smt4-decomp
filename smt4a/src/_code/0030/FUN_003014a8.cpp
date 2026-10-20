#include "common.h"

extern "C" {

void FUN_002ffd8c(void);

/* Runs FUN_002ffd8c and returns `object`. */
void *FUN_003014a8(void *object)
{
    FUN_002ffd8c();
    return object;
}

} /* extern "C" */
