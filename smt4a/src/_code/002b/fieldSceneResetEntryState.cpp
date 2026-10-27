#include "shard/W5_W5Match7_SceneState.h"
#include "shard/W5_W5Match7_FlagBanks.h"

extern "C" {

s32 gameFlagIsSet(u32 flag);
s32 FUN_002e5db4(void);

/* Resets the field scene's entry state; the entry mode depends on flag 0x4c9. */
void fieldSceneResetEntryState(void)
{
    FlagWorkBanks *flags = gameFlagsGetBlock();

    if (gameFlagIsSet(0x4c9)) {
        if (FUN_002e5db4() != 0) {
            g_lmapScene->entry.entryMode = 15;
        } else {
            g_lmapScene->entry.entryMode = 11;
        }
    } else {
        g_lmapScene->entry.entryMode = 15;
    }
    g_lmapScene->entry.unk228 = 6;
    g_lmapScene->entry.unk22c = 1;
    g_lmapScene->entry.unk240 = 5.0f;
    g_lmapScene->entry.unk1d4 = 0;
    flags->sceneEntry.unk10a0 = 0.0f;
    flags->sceneEntry.unk109c = 0;
    flags->sceneEntry.unk10a4 = 0;
    if (!gameFlagIsSet(0x4c9) || FUN_002e5db4() != 0) {
        g_lmapScene->entry.unk238 = 6;
    }
    g_lmapScene->entry.unk23c = 1;
}

} /* extern "C" */
