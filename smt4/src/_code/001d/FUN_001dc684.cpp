/* NON_MATCHING: retail stores producedBatches before loading nextMessageIndex/messageCount as one ldrd; this build loads the pair first (ldm through a third register) and stores both counters after. */
#include "shard/W6_W6Match1_CriticalSection.h"
#include "cec/CecProcess.h"

extern "C" {
s32 cecInboxReadMessages(u32 inboxHandle, void* destination,
                         s32 messageIndex, u32 count);
}

// Read messages into the locked ring, waiting for space until the final index is reached.
extern "C" void FUN_001dc684(CecProcess* process)
{
    for (;;) {
        ScopedCriticalLock lock(static_cast<void *>(process->lock));
        if (process->producedBatches - process->consumedBatches < 12u) {
            cecInboxReadMessages(reinterpret_cast<u32>(process->messageBox),
                                &process->slots[process->producedBatches % 12u],
                                process->nextMessageIndex, 1);
            process->producedBatches++;
            process->nextMessageIndex++;
            if (process->nextMessageIndex >= process->messageCount) {
                return;
            }
        }
    }
}
