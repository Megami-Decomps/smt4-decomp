#include "common.h"

extern "C" {

void FUN_001a3710(void *self);

/* Runs FUN_001a3710 on `self` and returns it. */
void *FUN_0018c988(void *self)
{
    FUN_001a3710(self);
    return self;
}

} /* extern "C" */
