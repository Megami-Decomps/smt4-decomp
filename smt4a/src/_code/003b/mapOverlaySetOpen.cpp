#include "shard/W5_W5Match7_SceneState.h"
#include "game/GameStateA.h"

extern "C" {
int sysPlaySe(int soundId);
int sub68OwnerCall6(void);
int sub68OwnerCall8(void);
int commonBgStopChildAndBeginTransition(void);
int commonBgReset(void);
int gameFlagIsSet(u32 flag);

/* Switch the map overlay and restore its background when closing it. */
void mapOverlaySetOpen(s32 open)
{
    if (open) {
        g_gameState.menuOpen = 1;
        sub68OwnerCall8();
        commonBgStopChildAndBeginTransition();
        sysPlaySe(0x92);
        return;
    }
    g_gameState.menuOpen = 0;
    if (!gameFlagIsSet(0x49A)) {
        commonBgStopChildAndBeginTransition();
    } else {
        commonBgReset();
    }
    if (gameFlagIsSet(0xC) && !gameFlagIsSet(0x10)) {
        commonBgStopChildAndBeginTransition();
    }
    sub68OwnerCall6();
    sysPlaySe(0x10E);
}
}
