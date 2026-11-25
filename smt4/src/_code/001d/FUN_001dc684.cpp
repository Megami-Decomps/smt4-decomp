/* NON_MATCHING: the producer counter increment interleaves with the message cursor update. */
#include "shard/W6_W6Match1_CriticalSection.h"
#include "cec/CecProcess.h"
#include "shard/W6_W6Match8_BattleDebug.h"

/* Reads into the locked ring, waiting for space until the final inbox message is reached. */
extern "C" void FUN_001dc684(CecProcess *process)
{
    for (;;) {
        ScopedCriticalLock lock((void *)process->lock);
        if (process->producedBatches - process->consumedBatches < 12u) {
            cecInboxReadMessages((u32)process->messageBox,
                                 (u8 *)&process->slots[process->producedBatches % 12u],
                                 process->nextMessageIndex, 1);
            ++process->producedBatches;
            s32 nextIndex = process->nextMessageIndex + 1;
            process->nextMessageIndex = nextIndex;
            if (nextIndex >= process->messageCount) {
                return;
            }
        }
    }
}
