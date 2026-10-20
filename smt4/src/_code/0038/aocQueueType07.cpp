#include "common.h"

extern "C" {

int memClear(u8 *buffer, int size);
int FUN_002a6e7c(u32 owner, u32 kind, u32 key, u8 *outBuffer);
int aocDisplayQueueRecord(u32 context, u8 *buffer, u32 arg0, u32 arg1, int flag0, int flag1, int flag2);

extern u32 g_aocDisplay;

/* Looks up the entry of kind 7 for `key`; when found, hands the filled buffer to the post routine. */
void aocQueueType07(u32 owner, u32 key, u32 arg1, u32 arg0)
{
    u8 buffer[128];

    memClear(buffer, 0x80);
    if (FUN_002a6e7c(owner, 7, key, buffer) != 0) {
        aocDisplayQueueRecord(g_aocDisplay, buffer, arg0, arg1, 1, 0x80, 0);
    }
}

} /* extern "C" */
