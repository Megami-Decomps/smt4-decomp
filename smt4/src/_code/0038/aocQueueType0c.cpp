/* NON_MATCHING: retail loads the request kind 12 into r8 before clearing the request (callee-saved, one more push); built passes the constant directly. */
#include "common.h"

extern "C" {

typedef struct AocRequest {
    u8 data[128]; /* 0x00 */
} AocRequest;

extern u32 g_aocDisplay;

extern void memClear(void *block, s32 size);
extern s32 FUN_002a6e7c(u32 context, s32 kind, u32 arg, AocRequest *request);
extern void aocDisplayQueueRecord(u32 display, AocRequest *request, u32 arg3, u32 arg2, s32 a, s32 mode, s32 b);

/* Fills a request of kind 12 for the add-on content and, when it is accepted, hands it to the display. */
void aocQueueType0c(u32 context, u32 arg, u32 second, u32 third)
{
    AocRequest request;
    s32 handle;

    memClear(&request, sizeof(request));
    handle = FUN_002a6e7c(context, 12, arg, &request);
    if (handle != 0) {
        aocDisplayQueueRecord(g_aocDisplay, &request, third, second, 0, 0x80, handle);
    }
}

} /* extern "C" */
