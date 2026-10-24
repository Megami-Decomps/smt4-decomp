#include "common.h"

extern "C" {

typedef struct AocRequest {
    u8 data[128]; /* 0x00 */
} AocRequest;

extern u32 g_aocDisplay;

extern void sysMemClear(void *block, s32 size);
extern s32 FUN_001b2bd8(u32 context, s32 kind, u32 arg, AocRequest *request);
extern void aocDisplayQueueRecord(u32 display, AocRequest *request, u32 arg3, u32 arg2, s32 a, s32 mode, s32 b);

/* Fills a request of the given kind and, when it is accepted, hands it to the display. */
static __inline void aocQueueRequest(u32 context, s32 kind, u32 arg, u32 second, u32 third)
{
    AocRequest request;
    s32 result;

    sysMemClear(&request, sizeof(request));
    result = FUN_001b2bd8(context, kind, arg, &request);
    if (result != 0) {
        aocDisplayQueueRecord(g_aocDisplay, &request, third, second, 0, 128, result);
    }
}

void FUN_004713ec(u32 context, u32 arg, u32 second, u32 third)
{
    aocQueueRequest(context, 16, arg, second, third);
}

} /* extern "C" */
