/* Matches with -O1 (requested): the add-on content code was built at a lower optimisation level. */
#include "common.h"
#include "AsdSDK/AsdMemUtil.h"
#include "shard/aocQueueType1f.h"

extern "C" {

typedef struct AocRequest {
    u8 data[128]; /* 0x00 */
} AocRequest;

extern u32 g_aocDisplay;

extern s32 FUN_002a6e7c(u32 context, s32 kind, u32 arg, AocRequest *request);
extern void aocDisplayQueueRecord(u32 display, AocRequest *request, u32 arg3, u32 arg2, s32 a, s32 mode, s32 b);

/* Fills a request for the add-on content and, when it is accepted, hands it to the display. */
void aocQueueType1f(u32 context, u32 arg, u32 second, u32 third)
{
    AocRequest request;

    memClear(&request, sizeof(request));
    if (FUN_002a6e7c(context, 31, arg, &request) != 0) {
        aocDisplayQueueRecord(g_aocDisplay, &request, third, second, 0, 4, 0);
    }
}

} /* extern "C" */
