#include "camp/CampState.h"

extern "C" {

void campReleaseRegisteredTouchRegions(void);
void FUN_002e26a4(void);
void FUN_00330b74(void);
void campCommonBgRelease(void);
void campButtonHelpRelease(void);
void partyPanelDestroy(void);
void FUN_003a76b8(void);
void aocScriptReleaseTableAndReset(void);
void asdMemFree(void *memory);
s32 jobStop(u32 job, s32 flag);

extern CampStateA *g_camp;

/* Shuts the game screen down: runs the clean-up calls, stops its job, frees it and clears the global. */
void campShutdown(void)
{
    CampStateA *game;

    game = g_camp;
    aocScriptReleaseTableAndReset();
    FUN_003a76b8();
    FUN_00330b74();
    campReleaseRegisteredTouchRegions();
    partyPanelDestroy();
    campCommonBgRelease();
    campButtonHelpRelease();
    FUN_002e26a4();
    jobStop(game->job, 0);
    asdMemFree(game);
    g_camp = NULL;
}

} /* extern "C" */
