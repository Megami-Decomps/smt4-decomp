#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"

struct SequenceValues {
    f32 values[6];
};
struct DeferredSequenceParameters {
    u32 first;      // 0x00
    u32 second;     // 0x04
    SequenceValues values; // 0x08
};
struct DeferredSequenceRequest {
    u8 pending;     // 0x00
    u8 unk01[3];    // 0x01
    DeferredSequenceParameters parameters; // 0x04
};

extern "C" {
extern DeferredSequenceRequest g_deferredSequenceRequest;

// Submits a copy of the deferred request and clears its pending flag.
void sequenceRequestFlushDeferred(void)
{
    DeferredSequenceParameters parameters;
    parameters.first = g_deferredSequenceRequest.parameters.first;
    parameters.second = g_deferredSequenceRequest.parameters.second;
    parameters.values = g_deferredSequenceRequest.parameters.values;
    g_deferredSequenceRequest.pending = 0;
    asdSequenceRequest(4, reinterpret_cast<const void *>(&parameters), sizeof(parameters));
}
}
