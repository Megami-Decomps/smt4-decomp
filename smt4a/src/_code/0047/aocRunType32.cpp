#include "shard/Shard0047.h"

extern "C" {

extern u32 g_aocDisplay;
extern s32 FUN_001b2bd8(u32 a, u32 type, u32 b, u32 c);
extern void FUN_00472350(u32 display, u32 b, u32 c);

void aocRunType32(u32 a, u32 b, u32 c)
{
    if (FUN_001b2bd8(a, 0x32, 0, c) != 0) {
        FUN_00472350(g_aocDisplay, b, c);
    }
}

} /* extern "C" */
