#include "shard/W5_W5Match2_SequencePending.h"
extern "C" {
extern SequencePending g_deferredSequenceRequest;
/* Defer the supplied sequence request until the next update. */
void sequenceRequestDefer(u32 id,u32 argument) { g_deferredSequenceRequest.active=1; g_deferredSequenceRequest.id=id; g_deferredSequenceRequest.argument=argument; }
}
