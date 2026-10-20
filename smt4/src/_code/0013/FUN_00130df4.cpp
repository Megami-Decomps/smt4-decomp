#include "common.h"

extern "C" {

int nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_Initialize(void *queue, void *storage, int capacity);

/* A blocking queue: 0x34 bytes of state followed by 0x80 bytes of item storage. */
typedef struct BlockingQueue {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u8 storage[0x80];
} BlockingQueue;

typedef struct Streamer {
    /* 0x000 */ BlockingQueue queues[2];
    /* 0x168 */ u8 unk168[4];
    /* 0x16C */ u32 unk16C;
    /* 0x170 */ u32 unk170;
    /* 0x174 */ u32 unk174;
    /* 0x178 */ u8 unk178[4];
    /* 0x17C */ u32 unk17C;
    /* 0x180 */ u32 unk180;
    /* 0x184 */ u32 unk184;
    /* 0x188 */ u32 unk188;
    /* 0x18C */ u8 unk18C;
    /* 0x18D */ u8 initialized;
} Streamer;

void FUN_00130df4(Streamer *streamer, u32 param2, u32 param3)
{
    streamer->unk16C = 0;
    streamer->unk170 = 0;
    streamer->unk174 = 0;
    streamer->unk184 = 0;
    streamer->unk188 = 0;
    streamer->unk18C = 0;
    streamer->unk17C = param2;
    streamer->unk180 = param3 >> 2;
    nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_Initialize(&streamer->queues[0], streamer->queues[0].storage, 0x20);
    nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_Initialize(&streamer->queues[1], streamer->queues[1].storage, 0x21);
    streamer->initialized = 1;
}

} /* extern "C" */
