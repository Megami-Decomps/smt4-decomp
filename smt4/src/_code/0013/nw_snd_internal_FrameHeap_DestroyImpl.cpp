#include "common.h"

extern "C" {

int FUN_001484dc(void *obj);

void *nw_snd_internal_FrameHeap_DestroyImpl(void *obj)
{
    FUN_001484dc(obj);
    return obj;
}

} /* extern "C" */
