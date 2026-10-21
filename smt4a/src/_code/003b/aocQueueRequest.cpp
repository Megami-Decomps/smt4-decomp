#include "common.h"

struct AocQueuedRequest {
    u32 request;  // 0x00
    u32 argument; // 0x04
};

struct AocJobQueue {
    u8 unk00[0x3c]; // 0x00
    AocQueuedRequest requests[8]; // 0x3c
    u8 pending; // 0x7c
};

extern "C" AocJobQueue* g_aocJob;

// Mark the AOC job pending and enqueue a request in its first empty slot.
extern "C" void aocQueueRequest(u32 request, u32 argument)
{
    AocJobQueue* job = g_aocJob;
    if (job != NULL) {
        job->pending = 1;
        for (s32 index = 0; index < 8; ++index) {
            if (job->requests[index].request == 0) {
                job->requests[index].request = request;
                job->requests[index].argument = argument;
                return;
            }
        }
    }
}
