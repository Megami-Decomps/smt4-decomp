/* NON_MATCHING: only the arm layout differs: retail shares the sysPlaySe call of the first 0xD3 arm with the final else arm and places the second 0xD3 arm, the 0x105 arm and the final arm after the main path. */
#include "common.h"
#include "game/GameStateA.h"

extern "C" {

void sysPlaySe(u32 id);
void buttonHelpSelectSlot(s32 a, s32 b, s32 c, s32 d);
s32 gameFlagIsSet(u32 flag);
s32 sub68OwnerCall2(void);
void sub68OwnerCall3(void);
void naviMainEnterState4IfActive(void);
void commonBgStopChildAndBeginTransition(void);
void commonBgReset(void);
s32 playerCanAffordRecoverySkill(void);

/* Opens (nonzero) or updates/closes (zero) the map pause menu: plays the matching sound, resets the
 * background and restores the field when the menu closes. */
void FUN_003a2278(s32 open)
{
    if (open) {
        if (g_gameState.menuOpen)
            return;
        g_gameState.menuOpen = 1;
        naviMainEnterState4IfActive();
        commonBgStopChildAndBeginTransition();
        sysPlaySe(0x92);
        return;
    }
    if (g_gameState.menuOpen) {
        g_gameState.menuOpen = 0;
        if (!gameFlagIsSet(0x49A))
            commonBgStopChildAndBeginTransition();
        else
            commonBgReset();
        if (gameFlagIsSet(12) && !gameFlagIsSet(16))
            commonBgStopChildAndBeginTransition();
        sub68OwnerCall3();
        return;
    }
    if (sub68OwnerCall2()) {
        sub68OwnerCall3();
    } else {
        if ((g_gameState.mapId == 5 && g_gameState.areaId == 12) || !gameFlagIsSet(0x49A)) {
            sysPlaySe(0xD3);
        } else if (gameFlagIsSet(12) && !gameFlagIsSet(16)) {
            sysPlaySe(0xD3);
        } else if (playerCanAffordRecoverySkill()) {
            if (g_gameState.mapId != 0x65) {
                sysPlaySe(0x104);
                buttonHelpSelectSlot(0, 0x13, 0x59, 1);
                buttonHelpSelectSlot(1, 0, 0, 1);
            } else {
                sysPlaySe(0x105);
                buttonHelpSelectSlot(0, 0x13, 0x59, 1);
                buttonHelpSelectSlot(1, 0, 0, 1);
            }
        } else {
            sysPlaySe(g_gameState.mapId >= 100 ? 0xD2 : 0x41);
        }
    }
    if (gameFlagIsSet(12) && !gameFlagIsSet(16))
        commonBgStopChildAndBeginTransition();
}

} /* extern "C" */
