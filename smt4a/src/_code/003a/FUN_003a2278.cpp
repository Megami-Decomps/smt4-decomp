/* NON_MATCHING: readable rebuild; retail duplicates the 0x104/0x105 sound branches and keeps the game state base in r4 with the flag number 0x49A in r5, which armcc here shares differently. */
#include "common.h"

/* The part of the game state this reads. */
struct PauseGameState {
    /* 0x000 */ s32 mode;
    /* 0x004 */ s32 subMode;
    /* 0x008 */ u8 unk008[0x28D];
    /* 0x295 */ s8 menuOpen;
};

extern "C" {
extern PauseGameState g_gameState;

void sysPlaySe(u32 id);
void FUN_00183f58(s32 a, s32 b, s32 c, s32 d);
s32 gameFlagIsSet(u32 flag);
s32 sub68OwnerCall2(void);
void sub68OwnerCall3(void);
void naviMainEnterState4IfActive(void);
void FUN_003b61ec(void);
void commonBgReset(void);
s32 FUN_004a0404(void);

/* Opens (nonzero) or updates/closes (zero) the map pause menu: plays the matching sound, resets the
 * background and restores the field when the menu closes. */
void FUN_003a2278(s32 open)
{
    if (open) {
        if (g_gameState.menuOpen)
            return;
        g_gameState.menuOpen = 1;
        naviMainEnterState4IfActive();
        FUN_003b61ec();
        sysPlaySe(0x92);
        return;
    }
    if (g_gameState.menuOpen) {
        g_gameState.menuOpen = 0;
        if (gameFlagIsSet(0x49A))
            commonBgReset();
        else
            FUN_003b61ec();
        if (gameFlagIsSet(12) && !gameFlagIsSet(16))
            FUN_003b61ec();
        sub68OwnerCall3();
        return;
    }
    if (sub68OwnerCall2()) {
        sub68OwnerCall3();
    } else {
        s32 sub = g_gameState.mode == 5 ? g_gameState.subMode : 0;
        if ((g_gameState.mode == 5 && sub == 12) || !gameFlagIsSet(0x49A)) {
            sysPlaySe(0xD3);
        } else if (gameFlagIsSet(12) && !gameFlagIsSet(16)) {
            sysPlaySe(0xD3);
        } else if (FUN_004a0404()) {
            if (g_gameState.mode != 0x65)
                sysPlaySe(0x104);
            else
                sysPlaySe(0x105);
            FUN_00183f58(0, 0x13, 0x59, 1);
            FUN_00183f58(1, 0, 0, 1);
        } else {
            sysPlaySe(g_gameState.mode < 100 ? 0x41 : 0xD2);
        }
    }
    if (gameFlagIsSet(12) && !gameFlagIsSet(16))
        FUN_003b61ec();
}

} /* extern "C" */
