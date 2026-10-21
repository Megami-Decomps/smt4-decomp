#include "shard/W5_W5Match7_SceneState.h"

extern "C" {
u32 scrGetArg(u32);
u32 FUN_002a4b28(u16);

// Queue an unregistered identifier once, using the first empty pending slot.
u32 FUN_0031d588(u32 argumentIndex)
{
    u32 id = scrGetArg(argumentIndex);
    if (FUN_002a4b28((u16)id) == 0) {
        for (s32 index = 0; index < 32; ++index) {
            if (g_gameState.pendingEntries.ids[index] == id)
                return 1;
            if (g_gameState.pendingEntries.ids[index] == 0) {
                g_gameState.pendingEntries.ids[index] = id;
                return 1;
            }
        }
    }
    return 1;
}
}
