/* NON_MATCHING: retail keeps the constant 0x10 (second argument of FUN_002a6e7c) in r8 from the start, which also moves the parameters to r6/r4/r5/r7; built loads it just before the call */
#include "common.h"

extern "C" {

extern u32 g_aocDisplay;

extern void memClear(void *buffer, s32 size);
extern s32 FUN_002a6e7c(u32 a, s32 kind, u32 b, u8 *buffer);
extern void aocDisplayQueueRecord(u32 display, u8 *buffer, u32 d, u32 c, s32 e, s32 size, s32 length);

void FUN_00389ed8(u32 a, u32 b, u32 c, u32 d)
{
    u8 buffer[128];
    s32 length;

    memClear(buffer, sizeof(buffer));
    length = FUN_002a6e7c(a, 0x10, b, buffer);
    if (length != 0) {
        aocDisplayQueueRecord(g_aocDisplay, buffer, d, c, 0, sizeof(buffer), length);
    }
}

} /* extern "C" */
