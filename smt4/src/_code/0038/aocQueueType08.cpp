#include "common.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

typedef struct Request {
    u64 unk00;      /* 0x00 (8-byte aligned) */
    u8 unk08[120];  /* 0x08 */
} Request;

extern s32 FUN_002a6e7c(u32 owner, s32 kind, u32 key, Request *req);
extern void aocDisplayQueueRecord(u32 context, Request *req, u32 arg0, u32 arg1, s32 flag0, s32 flag1, s32 flag2);
extern u32 g_aocDisplay; /* 0x433130 */

/* Looks up the entry of kind 8 for `key`; when found, hands the filled request to the display queue. */
void aocQueueType08(u32 owner, u32 key, u32 arg1, u32 arg0)
{
    Request req;

    memClear(&req, 0x80);
    if (FUN_002a6e7c(owner, 8, key, &req) != 0) {
        aocDisplayQueueRecord(g_aocDisplay, &req, arg0, arg1, 1, 0x80, 0);
    }
}

}
