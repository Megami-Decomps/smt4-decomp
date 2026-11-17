#include "shard/W5_W5Match7_SceneState.h"
#include "map/LmapGlobals.h"
#include "shard/W5_W5Match7_FlagBanks.h"

extern "C" {

s32 gameFlagIsSet(u32 flag);
s32 saveSlotSelectedIsId175(void);

/* Resets the field scene's entry state; the entry mode depends on flag 0x4c9. */
void fieldSceneResetEntryState(void)
{
    FlagWorkBanks *flags = gameFlagsGetBlock();

    if (gameFlagIsSet(0x4c9)) {
        if (saveSlotSelectedIsId175() != 0) {
            g_lmapScene->movementState = 15;
        } else {
            g_lmapScene->movementState = 11;
        }
    } else {
        g_lmapScene->movementState = 15;
    }
    g_lmapScene->unk228 = 6;
    g_lmapScene->unk22C = 1;
    g_lmapScene->unk240 = 5.0f;
    g_lmapScene->unk1D4 = 0;
    flags->sceneEntry.unk10a0 = 0.0f;
    flags->sceneEntry.unk109c = 0;
    flags->sceneEntry.unk10a4 = 0;
    if (!gameFlagIsSet(0x4c9) || saveSlotSelectedIsId175() != 0) {
        g_lmapScene->unk238 = 6;
    }
    g_lmapScene->unk23C = 1;
}

} /* extern "C" */
