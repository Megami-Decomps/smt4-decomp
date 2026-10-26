/* NON_MATCHING: lock/batch/count registers rotate and batch/message counters are stored in a different order. */
#include "AsdSDK/Source/Net/Cec/AsdCecProcess.h"

extern "C" {
void nn_os_CriticalSection_Enter(void *lock);
void nn_os_CriticalSection_Leave(void *lock);
s32 asdCecInboxGetMessageCount();
void asdCecReadInboxMessages(u32 box, s32 count, AsdCecInboxBatch *batch, u32 flags);

void FUN_0028196c(AsdCecProcessWork *work)
{
    void *lock = work->inbox.lock;
    for (;;) {
        nn_os_CriticalSection_Enter(lock);
        if (work->inbox.producedBatches - work->inbox.consumedBatches < 32) {
            AsdCecInboxBatch *batch = &work->inbox.batches[work->inbox.producedBatches & 31];
            s32 count = asdCecInboxGetMessageCount();
            if (count > 32) {
                count = 32;
            }
            asdCecReadInboxMessages(0, count, batch, 0);
            ++work->inbox.producedBatches;
            work->inbox.receivedCount += count;
            if (work->inbox.receivedCount >= work->inbox.requestedCount) {
                nn_os_CriticalSection_Leave(lock);
                return;
            }
        }
        nn_os_CriticalSection_Leave(lock);
    }
}
}
