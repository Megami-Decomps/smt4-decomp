/* NON_MATCHING: as in IV's twin FUN_001dc684, retail stores producedBatches before loading receivedCount/requestedCount as one ldrd; this build loads the pair first and stores both counters after. */
#include "shard/W6_W6Match1_CriticalSection.h"
#include "AsdSDK/Source/Net/Cec/AsdCecProcess.h"

extern "C" {
s32 asdCecInboxGetMessageCount();
void asdCecReadInboxMessages(u32 box, s32 count, AsdCecInboxBatch *batch, u32 flags);

/* Reads inbox batches into the locked ring, waiting for space until every message has been read. */
void FUN_0028196c(CecProcessA *work)
{
    for (;;) {
        ScopedCriticalLock lock(static_cast<void *>(work->lock));
        if (work->producedBatches - work->consumedBatches < 32) {
            AsdCecInboxBatch *batch = &work->batches[work->producedBatches & 31];
            s32 count = asdCecInboxGetMessageCount();
            if (count > 32) {
                count = 32;
            }
            asdCecReadInboxMessages(0, count, batch, 0);
            ++work->producedBatches;
            work->receivedCount += count;
            if (work->receivedCount >= work->requestedCount) {
                return;
            }
        }
    }
}
}
