/* NON_MATCHING: retail keeps the constant kind 12 in r7 across the memClear call (one more saved register and 4 more bytes of frame). */
#include "common.h"

extern "C" {

typedef struct Request {
    u64 unk00;      /* 0x00 (8-byte aligned) */
    u8 unk08[120];  /* 0x08 */
} Request;

extern void memClear(void *buffer, s32 size);
extern u8 *FUN_002a6e7c(u32 owner, u32 kind, u32 key, Request *req);
extern void FUN_002a4584(u32 context, Request *req, u32 arg0, u8 *entry8, s32 flag0, s32 flag1, u8 *entry);
extern u32 g_aocDisplay; /* 0x433130 */

/* Looks up the entry of kind 12 for `key`; when found, hands the request to the display queue. */
void FUN_00387a08(u32 owner, u32 key, u32 arg0)
{
    Request req;
    u8 *entry;

    memClear(&req, 0x80);
    entry = FUN_002a6e7c(owner, 12, key, &req);
    if (entry != NULL) {
        FUN_002a4584(g_aocDisplay, &req, arg0, entry + 8, 1, 0x80, entry);
    }
}

}
