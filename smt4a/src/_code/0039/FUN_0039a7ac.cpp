/* NON_MATCHING: logic and call chain match; armcc allocates the shared zero/one registers (retail r5=0, r6=1, the 0.1f step hoisted into s2 and the fade-mode tests ordered 1 then 2 via a branch pair) differently */
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
s32 FUN_00284d94(void);
s32 QuestCenterMode_IsBusy(void);
s32 shopPollShutdown(void);
s32 onesRoomIsRunning(void);

/* Steps the common background overlay's fade and decides from the game state whether it should be shown. */
u32 FUN_0039a7ac(void)
{
    CommonBackgroundChild *overlay = g_commonBg.owned;
    if (overlay->fadeMode != 0) {
        if (overlay->fadeMode == 1) {
            overlay->fade -= 0.1f;
            if (overlay->fade <= 0.0f) {
                overlay->fade = 0.0f;
                overlay->fadeMode = 0;
            }
        } else if (overlay->fadeMode == 2) {
            overlay->fade += 0.1f;
            if (overlay->fade >= overlay->fadeMax) {
                overlay->fade = overlay->fadeMax;
                overlay->fadeMode = 3;
            }
        }
    }

    s8 shown;
    if (overlay->keepAlive != 0) {
        shown = 1;
    } else {
        shown = 0;
        if (gameFlagIsSet(0x51) != 0 && (gameFlagIsSet(0xc) == 0 || gameFlagIsSet(0x10) != 0) && gameFlagIsSet(0x11) == 0) {
            if (aocJobIsValid() != 0) {
                if (engineCleanupIsDone() == 0) {
                    shown = 1;
                }
            } else if (FUN_002ef9f0() == 0) {
                if (campIsState85() != 0) {
                    shown = 1;
                } else if (((sub68OwnerCall2() == 0 || campIsState85() != 0) || namePollShutdown() != 0) &&
                           titleMainIsRunning() == 0 && FUN_00284d94() == 0 && QuestCenterMode_IsBusy() == 0 &&
                           shopPollShutdown() == 0 && onesRoomIsRunning() == 0 && FUN_00270a70() == 0) {
                    shown = 1;
                }
            }
        }
    }
    if (overlay->shown != shown) {
        overlay->shown = shown;
        if (shown == 0) {
            overlay->fadeMode = 1;
            overlay->unk08 = 0;
        } else {
            overlay->fadeMode = 2;
            overlay->unk08 = 0;
            overlay->fadeMax = namePollShutdown() != 0 ? 0.55f : 0.8f;
        }
    }
    return 0;
}
}
