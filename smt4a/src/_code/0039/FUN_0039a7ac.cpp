/* NON_MATCHING: 44 lines; logic and call chain match; retail keeps the shared 0 and 1 in r5/r6 (the shown result is moved from them at the join, the fade-out arm stores them predicated) and pools the 0.55f before the 0.8f, where the build rematerialises the constants */
#include "shard/W6_W6Match5_CommonBackground.h"
#include "addon/aocMain.h"
#include "map/mapRndMaze.h"

extern "C" {
s32 gameFlagIsSet(u32 flag);
s32 aocJobIsValid(void);
s32 engineCleanupIsDone(void);
s32 campIsState85(void);
s32 sub68OwnerCall2(void);
s32 namePollShutdown(void);
s32 titleMainIsRunning(void);
s32 npcRoomIsOpen(void);
s32 QuestCenterMode_IsBusy(void);
s32 shopPollShutdown(void);
s32 onesRoomIsRunning(void);

/* Steps the common background overlay's fade and decides from the game state whether it should be shown. */
u32 FUN_0039a7ac(void)
{
    CommonBackgroundChild *overlay = g_commonBg.owned;
    switch (overlay->fadeMode) {
    case 0:
        break;
    case 1:
        overlay->fade -= 0.1f;
        if (overlay->fade <= 0.0f) {
            overlay->fade = 0.0f;
            overlay->fadeMode = 0;
        }
        break;
    case 2:
        overlay->fade += 0.1f;
        if (overlay->fade >= overlay->fadeMax) {
            overlay->fade = overlay->fadeMax;
            overlay->fadeMode = 3;
        }
        break;
    }

    u8 shown = 1;
    if (overlay->keepAlive == 0)
        shown = (gameFlagIsSet(0x51) != 0 && (gameFlagIsSet(0xc) == 0 || gameFlagIsSet(0x10) != 0) &&
                gameFlagIsSet(0x11) == 0 &&
                (aocJobIsValid() != 0
                     ? engineCleanupIsDone() == 0
                     : mapRndMazeTaskIsActive() == 0 &&
                           (campIsState85() != 0 ||
                            (((sub68OwnerCall2() == 0 || campIsState85() != 0) || namePollShutdown() != 0) &&
                             titleMainIsRunning() == 0 && npcRoomIsOpen() == 0 && QuestCenterMode_IsBusy() == 0 &&
                             shopPollShutdown() == 0 && onesRoomIsRunning() == 0 && aocMainPollShutdown() == 0))));
    if (overlay->shown != shown) {
        overlay->shown = shown;
        if (shown == 0) {
            overlay->fadeMode = 1;
            overlay->unk08 = 0;
        } else {
            overlay->fadeMode = 2;
            overlay->unk08 = 0;
            if (namePollShutdown() == 0)
                overlay->fadeMax = 0.8f;
            else
                overlay->fadeMax = 0.55f;
        }
    }
    return 0;
}
}
