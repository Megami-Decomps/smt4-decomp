#include "common.h"

extern "C" {

extern s8 g_deferredSequenceRequest;

s32 sequenceRequestIsDeferred(void)
{
    return g_deferredSequenceRequest;
}

} /* extern "C" */
