#include "common.h"

extern "C" {

int sysMemClear(u8 *buffer, int size);
int FUN_001b2bd8(u32 owner, u32 kind, u32 key, u8 *outBuffer);
int FUN_00472078(u32 context, u8 *buffer, u32 arg0, u32 arg1, int flag0, int flag1, int flag2);

extern u32 g_aocDisplay;

/* Looks up the entry of kind 0x20 for `key`; when found, hands the filled buffer to the post routine. */
void FUN_0046c010(u32 owner, u32 key, u32 arg1, u32 arg0)
{
    u8 buffer[128];

    sysMemClear(buffer, 0x80);
    if (FUN_001b2bd8(owner, 0x20, key, buffer) != 0) {
        FUN_00472078(g_aocDisplay, buffer, arg0, arg1, 0, 4, 0);
    }
}

} /* extern "C" */
