#include "common.h"

extern "C" {

void FUN_001a3710(void *self);

/* Runs FUN_001a3710 on `self` and returns it. */
void *nw_snd_internal_FrameHeap_DestroyImpl(void *self)
{
    FUN_001a3710(self);
    return self;
}

} /* extern "C" */
