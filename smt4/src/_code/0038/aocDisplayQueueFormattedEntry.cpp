#include "common.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

extern u32 g_aocDisplay;

extern s32 FUN_002a6e7c(u32 a, s32 kind, u32 b, u8 *buffer);
extern void aocDisplayQueueRecord(u32 display, u8 *buffer, u32 d, u32 c, s32 e, s32 size, s32 length);

static inline void formatAndQueueAocRecord(u32 a, s32 kind, u32 b, u32 c, u32 d)
{
    u8 buffer[128];
    s32 length;

    memClear(buffer, sizeof(buffer));
    length = FUN_002a6e7c(a, kind, b, buffer);
    if (length != 0) {
        aocDisplayQueueRecord(g_aocDisplay, buffer, d, c, 0, sizeof(buffer), length);
    }
}

void aocDisplayQueueFormattedEntry(u32 a, u32 b, u32 c, u32 d)
{
    formatAndQueueAocRecord(a, 0x10, b, c, d);
}

} /* extern "C" */
