/* NON_MATCHING: retail hoists both header constants (0xf00e6 as 0xf01c5 - 223) and the zero above the index test, stores the cache entry before the push and reloads the cursor for the copy; this build loads the constants per arm and passes the cursor it computed. */
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"

extern "C" {
void nnnstdMemCpy(void *destination, const void *source, u32 size);
extern u32 *g_commandBufferCursor;
extern const AsdEnvironmentCommands *DAT_00646598[];

/* Emits an environment command block only when its cached binding changes. */
void FUN_001cefe0(const AsdEnvironmentCommands *commands, u32 index)
{
    if (DAT_00646598[index] != commands) {
        DAT_00646598[index] = commands;
        u32 *cursor = g_commandBufferCursor;
        if (index == 23) {
            cursor[0] = 0;
            cursor[1] = 0xf00e6;
        } else {
            if (index >= 7) {
                ++index;
            }
            cursor[0] = index * 0x100;
            cursor[1] = 0xf01c5;
        }
        g_commandBufferCursor = cursor + 2;
        const void *data;
        if (commands->dataOffset != 0) {
            data = (const u8 *)&commands->dataOffset + commands->dataOffset;
        } else {
            data = NULL;
        }
        u32 size = commands->size;
        nnnstdMemCpy(g_commandBufferCursor, data, size);
        g_commandBufferCursor = (u32 *)((u8 *)g_commandBufferCursor + (size & ~3U));
    }
}
}
