#include "map/mapDepart.h"
#include "game/GameStateA.h"

extern "C" {
s32 scrGetArg(s32 index);
u32 gameFlagIsSet(u32 flag);
void naviMainEnterState4IfActive(void);
void commonBgStopChildAndBeginTransition(void);
void commonBgReset(void);
void sub68OwnerCall3(void);
void sysPlaySe(u32 id);

/* Changes the navi/background display mode only when the requested flag differs. */
u32 FUN_0038ae58(void)
{
    s32 enabled = scrGetArg(0);
    if (enabled == 0) {
        if (g_gameState.menuOpen != 0) {
            g_gameState.menuOpen = 0;
            if (gameFlagIsSet(0x49A) == 0) {
                commonBgStopChildAndBeginTransition();
            } else {
                commonBgReset();
            }
            sub68OwnerCall3();
        }
    } else {
        if (g_gameState.menuOpen == 0) {
            g_gameState.menuOpen = 1;
            naviMainEnterState4IfActive();
            commonBgStopChildAndBeginTransition();
            sysPlaySe(0x92);
        }
    }
    return 1;
}
}
