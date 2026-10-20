#include "common.h"

extern "C" {

void FUN_002e9974(void);

/* Runs FUN_002e9974 and returns `object`. */
void *FUN_002ee5b8(void *object)
{
    FUN_002e9974();
    return object;
}

} /* extern "C" */
