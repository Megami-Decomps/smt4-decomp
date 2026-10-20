#include "common.h"

extern "C" {

void FUN_001323aa(void);

/* Runs FUN_001323aa and returns `object`. */
void *FUN_002fbb38(void *object)
{
    FUN_001323aa();
    return object;
}

} /* extern "C" */
