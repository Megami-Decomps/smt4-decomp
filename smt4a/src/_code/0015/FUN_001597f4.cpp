#include "common.h"

extern "C" {

void nn_hid_DisableAccelerometer(void *self);

/* Runs nn_hid_DisableAccelerometer on `self` and returns it. */
void *FUN_001597f4(void *self)
{
    nn_hid_DisableAccelerometer(self);
    return self;
}

} /* extern "C" */
