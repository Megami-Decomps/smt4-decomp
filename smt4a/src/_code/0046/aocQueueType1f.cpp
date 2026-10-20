#include "common.h"

extern "C" {

typedef struct AocRequest {
    u8 data[128]; /* 0x00 */
} AocRequest;

extern u32 g_aocDisplay;

extern void sysMemClear(void *block, s32 size);
extern s32 FUN_001b2bd8(u32 context, s32 kind, u32 arg, AocRequest *request);
extern void aocDisplayQueueRecord(u32 display, AocRequest *request, u32 arg3, u32 arg2, s32 a, s32 mode, s32 b);

/* Fills a request for the add-on content and, when it is accepted, hands it to the display. */
void aocQueueType1f(u32 context, u32 arg, u32 second, u32 third)
{
    AocRequest request;

    sysMemClear(&request, sizeof(request));
    if (FUN_001b2bd8(context, 31, arg, &request) != 0) {
        aocDisplayQueueRecord(g_aocDisplay, &request, third, second, 0, 4, 0);
    }
}

} /* extern "C" */
