/* NON_MATCHING: lock/batch/count registers rotate and batch/message counters are stored in a different order. */
#include "AsdSDK/Source/Net/Cec/AsdCecProcess.h"

extern "C" {
void nn_os_CriticalSection_Enter(void *lock);
void nn_os_CriticalSection_Leave(void *lock);
s32 asdCecInboxGetMessageCount();
void asdCecReadInboxMessages(u32 box, s32 count, AsdCecInboxBatch *batch, u32 flags);

void FUN_0028196c(CecProcessA *work)
{
    void *lock = work->lock;
    for (;;) {
        nn_os_CriticalSection_Enter(lock);
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
                nn_os_CriticalSection_Leave(lock);
                return;
            }
        }
        nn_os_CriticalSection_Leave(lock);
    }
}
}
