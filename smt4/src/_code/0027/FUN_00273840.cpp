#include "map/mapDepart.h"
#include "game/GameState.h"
extern "C" {
void commonBgReset(void);
void FUN_002757a8(void);
void FUN_00275bc8(void);
void commonBgStopChildAndBeginTransition(void);
void buttonHelpSetPreset(s32 preset);
s32 gameFlagIsSet(u32 flag);
s32 lmapMainGetFlag(void);
s32 NaviMain_IsMapOpen(void);

/* Switch the map help overlay and restore the appropriate navigation preset. */
void FUN_00273840(s32 enabled)
{
    if (enabled) {
        if (!g_gameState.map.bgResetPending) {
            g_gameState.map.bgResetPending = 1;
            FUN_00275bc8();
            commonBgStopChildAndBeginTransition();
            buttonHelpSetPreset(0x90);
        }
        return;
    }
    if (g_gameState.map.bgResetPending) {
        g_gameState.map.bgResetPending = 0;
        if (gameFlagIsSet(0x16))
            commonBgReset();
        else
            commonBgStopChildAndBeginTransition();
    } else if (!NaviMain_IsMapOpen()) {
        if (g_gameState.mapId == 101) {
            if (lmapMainGetFlag())
                buttonHelpSetPreset(0xDE);
            else
                buttonHelpSetPreset(0xD0);
        } else if (g_gameState.mapId >= 100) {
            buttonHelpSetPreset(0xD0);
        } else if (g_gameState.mapId == 36) {
            buttonHelpSetPreset(0xD1);
        } else if (gameFlagIsSet(0x16)) {
            buttonHelpSetPreset(0x3F);
        } else {
            buttonHelpSetPreset(0xD9);
        }
        return;
    }
    FUN_002757a8();
}
}
