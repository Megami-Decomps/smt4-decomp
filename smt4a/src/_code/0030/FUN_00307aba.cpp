#include "common.h"

extern "C" {

void FUN_001201be(void);

/* Runs FUN_001201be and returns `object`. */
void *FUN_00307aba(void *object)
{
    FUN_001201be();
    return object;
}

} /* extern "C" */
