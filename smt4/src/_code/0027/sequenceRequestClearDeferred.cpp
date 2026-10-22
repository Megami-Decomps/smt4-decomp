#include "common.h"

extern "C" {

extern u8 g_deferredSequenceRequest;

void sequenceRequestClearDeferred(void)
{
    g_deferredSequenceRequest = 0;
}

} /* extern "C" */
