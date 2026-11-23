/* NON_MATCHING: both field tests match, but armcc puts the null check before the push; retail tests with `movs r4, r0` after the push. */
#include "AsdSDK/AsdMemUtil.h"
#include "Model/MoriModelCommand.h"

extern "C" {

/* Clears the queue's records and resets its bookkeeping, if the queue has backing storage. */
void moriCommandQueueClear(MoriCommandQueue *queue)
{
    if (queue == NULL)
        return;
    if (queue->data == NULL && queue->records == NULL)
        return;

    sysMemClear(queue->records, queue->recordCount * 0x1C);
    queue->unk0C = 0;
    queue->unk10 = 0;
    queue->recordCount = 0;
    queue->unk28 = 0;
    queue->unk14 = 0;
    queue->unk24 = 0;
    queue->unk34 = 0;
    queue->unk30 = 0;
}

} /* extern "C" */
