/* NON_MATCHING: Cache-store timing, command-header constant loading and relative-payload argument scheduling differ. */
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"

extern "C" {
void nnnstdMemCpy(void *destination, const void *source, u32 size);
extern u32 *g_commandBufferCursor;
extern const AsdEnvironmentCommands *DAT_004e9dc8[];

/* Emits an environment command block only when its cached binding changes. */
void FUN_002a1e08(const AsdEnvironmentCommands *commands, u32 index)
{
    if (DAT_004e9dc8[index] != commands) {
        DAT_004e9dc8[index] = commands;
        u32 *payload = g_commandBufferCursor + 2;
        if (index == 23) {
            g_commandBufferCursor[0] = 0;
            g_commandBufferCursor[1] = 0xf00e6;
        } else {
            if (index >= 7) {
                ++index;
            }
            g_commandBufferCursor[0] = index * 0x100;
            g_commandBufferCursor[1] = 0xf01c5;
        }
        const void *data = NULL;
        if (commands->dataOffset != 0) {
            data = (const u8 *)&commands->dataOffset + commands->dataOffset;
        }
        u32 size = commands->size;
        g_commandBufferCursor = payload;
        nnnstdMemCpy(payload, data, size);
        g_commandBufferCursor = (u32 *)((u8 *)g_commandBufferCursor + (size & ~3U));
    }
}
}
