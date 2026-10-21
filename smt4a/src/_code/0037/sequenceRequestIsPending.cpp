#include "shard/Shard0037.h"

extern "C" {

extern s8 g_deferredSequenceRequest;

s32 sequenceRequestIsPending(void)
{
    return g_deferredSequenceRequest;
}

} /* extern "C" */
