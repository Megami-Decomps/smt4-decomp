/* Starts a 0x1d request for `id` and, if accepted, hands the request buffer to the dispatcher. */
#include "common.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

typedef struct Request {
    u64 unk00;      /* 0x00 (8-byte aligned) */
    u8 unk08[120];  /* 0x08 */
} Request;

extern s32 FUN_002a6e7c(u32 a, s32 kind, u32 id, Request *req);
extern void aocDisplayQueueRecord(u32 a, Request *req, u32 b, u32 c, s32 d, s32 e, s32 f);
extern u32 g_aocDisplay;

void aocQueueType1d(u32 a, u32 id, u32 c, u32 b)
{
    Request req;

    memClear(&req, 0x80);
    if (FUN_002a6e7c(a, 0x1d, id, &req) != 0) {
        aocDisplayQueueRecord(g_aocDisplay, &req, b, c, 0, 4, 0);
    }
}

}
