#include "common.h"

extern "C" {

void FUN_002f5044(void *self);

/* Runs FUN_002f5044 on `self` and returns it. */
void *FUN_0010b89c(void *self)
{
    FUN_002f5044(self);
    return self;
}

} /* extern "C" */
