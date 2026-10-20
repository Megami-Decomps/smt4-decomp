#include "shard/Shard0046.h"

extern "C" {

extern u32 g_aocDisplay;
extern void sysMemClear(u8 *ptr, u32 size);
extern s32 FUN_001b2bd8(u32 a, u32 type, u32 b, u8 *buffer);
extern void FUN_001b2ebc(u32 display, u8 *buffer, u32 c, s32 size, s32 d, s32 e, s32 f);

void aocDrawText8(u32 a, u32 b, u32 c)
{
    u8 buffer[0x80];
    s32 size;

    sysMemClear(buffer, 0x80);
    size = FUN_001b2bd8(a, 8, b, buffer);
    if (size != 0) {
        FUN_001b2ebc(g_aocDisplay, buffer, c, size + 8, 1, 0x80, 0);
    }
}

} /* extern "C" */
