#include "addon/AocDrawText.h"
#include "shard/Shard0046.h"

extern "C" {

extern u32 g_aocDisplay;
extern void sysMemClear(u8 *ptr, u32 size);
extern s32 FUN_001b2bd8(AocSystemA *system, u32 type, u32 id, u8 *buffer);
extern void *FUN_001b2ebc(u32 display, u8 *buffer, s32 flags, s32 size, s32 d, s32 e, s32 f);

void *aocDrawText7(AocSystemA *system, u32 id, s32 flags)
{
    u8 buffer[0x80];
    s32 size;

    sysMemClear(buffer, 0x80);
    size = FUN_001b2bd8(system, 7, id, buffer);
    if (size != 0) {
        return FUN_001b2ebc(g_aocDisplay, buffer, flags, size + 8, 1, 0x80, 0);
    }
    return NULL;
}

} /* extern "C" */
