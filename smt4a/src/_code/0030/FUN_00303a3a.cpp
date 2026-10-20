#include "common.h"

extern "C" {

void FUN_00133cbc(void);

/* Runs FUN_00133cbc and returns `object`. */
void *FUN_00303a3a(void *object)
{
    FUN_00133cbc();
    return object;
}

} /* extern "C" */
