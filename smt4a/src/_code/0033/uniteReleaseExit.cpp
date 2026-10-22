#include "shard/X14_EngineUnits.h"

extern "C" {

extern EngineUnitsRef g_engineCleanupOwner;

s32 jobIsValid(u32 job);
void jobStop(u32 job, s32 flags);
void sysPlaySe(u32 se);
void bgmFadeOut(s32 frames);
void bgmReleaseStopped(void);
s32 uniteSoundRequest(void);
s32 mapMainIsBusy(void);
s32 lmapMainIsRunning(void);
void campCommonBgRelease(void);
void campButtonHelpRelease(void);

/* Stop the unite job: settle its BGM or exit sound by exit mode, then release the camp background and button help. */
void uniteReleaseExit(void)
{
    EngineUnits *unite = g_engineCleanupOwner.instance;

    if (unite == NULL || !jobIsValid(unite->job)) {
        return;
    }
    switch (g_engineCleanupOwner.instance->exitMode) {
    case 1:
        if (!uniteSoundRequest()) {
            if (mapMainIsBusy() || lmapMainIsRunning()) {
                bgmReleaseStopped();
            } else {
                bgmFadeOut(60);
            }
        }
        break;
    case 3:
        sysPlaySe(unite->exitSe);
        break;
    }
    jobStop(g_engineCleanupOwner.instance->job, 0);
    campCommonBgRelease();
    campButtonHelpRelease();
}

} /* extern "C" */
