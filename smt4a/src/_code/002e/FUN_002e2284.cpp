/* NON_MATCHING: callback return-state branch placement and post-banner compiler hints differ; 62 built versus 64 retail rows. */
#include "shard/W6_W6Match4_CampCecResumeState.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
extern CampCecSceneGlobals g_campCec;
void *textureGetIndexedResource(u32 slot);
s32 loadSlotIsLoaded(u32 slot);
s32 bgmGetStateById(u32 id);
s32 FUN_002e2114(u32 *holder);
void campCecResetCameraHolder(u32 *holder);
void linkHolderApplyFlag(u32 *holder, s32 flags);
ScriptRunState *FUN_00275bc8(void *resource, u32 entry);
void progressConditionsUpdateUnlocks(void);
s32 gameFlagIsSet(u32 flag);
void sysPlaySe(u32 id);
void scrScriptProcessStartEntry(ScriptRunState *script, s32 entry);
void campHideNumericBanner(void);

u32 FUN_002e2284(CampCecResumeState *work)
{
    u32 status = 0;
    if (textureGetIndexedResource(0x2E) && asdTMTexTableNodeIsLoaded(0x2E, 0) &&
        loadSlotIsLoaded(0x4A) && bgmGetStateById(0x1000049) == 1) {
        if (FUN_002e2114(g_campCec.work->holder)) {
            campCecResetCameraHolder(g_campCec.work->holder);
            linkHolderApplyFlag(g_campCec.work->holder, 0);
            work->launch.script = FUN_00275bc8(work->launch.resource, work->launch.entry);
            work->launch.script->mode = 2;
            progressConditionsUpdateUnlocks();
            if (gameFlagIsSet(0x4AA)) {
                work->state = 1;
                sysPlaySe(0x10D);
            } else {
                work->state = 13;
                scrScriptProcessStartEntry(work->launch.script, 0x1F);
                campHideNumericBanner();
            }
            status = 3;
        }
    }
    return status;
}
}
