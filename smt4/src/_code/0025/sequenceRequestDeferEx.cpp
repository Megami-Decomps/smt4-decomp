/* NON_MATCHING: compiler coalesces the six argument loads/stores into VFP block copies. */
#include "shard/W6_W6Match2_SequenceExtended.h"

extern "C" ExtendedSequencePending g_deferredSequenceRequest;

// Defer a sequence request with its six-word extended argument block.
extern "C" void sequenceRequestDeferEx(u32 id, const u32* parameters)
{
    g_deferredSequenceRequest.request.active = 1;
    g_deferredSequenceRequest.parameters[0] = parameters[0];
    g_deferredSequenceRequest.parameters[1] = parameters[1];
    g_deferredSequenceRequest.parameters[2] = parameters[2];
    g_deferredSequenceRequest.parameters[3] = parameters[3];
    g_deferredSequenceRequest.parameters[4] = parameters[4];
    g_deferredSequenceRequest.parameters[5] = parameters[5];
    g_deferredSequenceRequest.request.id = id;
    g_deferredSequenceRequest.request.argument = 0xffffffffu;
}
