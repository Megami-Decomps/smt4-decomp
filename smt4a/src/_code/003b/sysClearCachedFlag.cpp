#include "shard/Shard003B.h"

extern "C" {

extern s8 g_deferredSequenceRequest;

void sysClearCachedFlag(void)
{
    g_deferredSequenceRequest = 0;
}

} /* extern "C" */
