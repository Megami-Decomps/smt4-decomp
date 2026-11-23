/* NON_MATCHING: retail keeps the null check inside the frame and stores 0x300 first; the build tests before its push and combines two stores. */
#include "AsdSDK/AsdMemUtil.h"
#include "Model/MoriModelCommand.h"

/* Initializes a command queue over the caller's byte and record buffers. */
extern "C" void moriCommandQueueInit(MoriCommandQueue *queue, u32 dataSize, void *data, s32 recordCapacity, void *records)
{
    if (queue != NULL) {
        sysMemClear(queue, sizeof(*queue));
        queue->unk2C = 0x300;
        queue->unk0C = 0;
        queue->dataSize = dataSize;
        queue->data = data;
        queue->recordCount = 0;
        queue->unk10 = 0;
        queue->unk28 = 0;
        queue->unk24 = 0;
        queue->unk34 = 0;
        queue->records = records;
        queue->recordCapacity = recordCapacity;
        queue->unk30 = 0;
        sysMemClear(records, recordCapacity * 0x1C);
    }
}
