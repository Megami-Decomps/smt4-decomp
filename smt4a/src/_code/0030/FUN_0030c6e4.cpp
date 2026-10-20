#include "common.h"

extern "C" {

void FUN_0011eec4(void);

/* Runs FUN_0011eec4 and returns `object`. */
void *FUN_0030c6e4(void *object)
{
    FUN_0011eec4();
    return object;
}

} /* extern "C" */
