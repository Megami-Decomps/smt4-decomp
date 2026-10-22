/* NON_MATCHING: Enable/disable blocks are laid out differently and retail retains additional NOPs around its notifications. */
#include "map/mapDepart.h"

extern "C" {
extern GameStateA g_gameState;
s32 scrGetArg(s32 index);
u32 gameFlagIsSet(u32 flag);
void FUN_00379be8(void);
void FUN_003b61ec(void);
void commonBgReset(void);
void sub68OwnerCall3(void);
void sysPlaySe(u32 id);

/* Changes the navi/background display mode only when the requested flag differs. */
u32 FUN_0038ae5c(s32 argumentIndex)
{
    s32 enabled = scrGetArg(argumentIndex);
    if (enabled != 0) {
        if (g_gameState.mapFlags.unk295 == 0) {
            g_gameState.mapFlags.unk295 = 1;
            FUN_00379be8();
            FUN_003b61ec();
            sysPlaySe(0x92);
        }
    } else if (g_gameState.mapFlags.unk295 != 0) {
        g_gameState.mapFlags.unk295 = 0;
        if (gameFlagIsSet(0x49A) != 0) {
            commonBgReset();
        } else {
            FUN_003b61ec();
        }
        sub68OwnerCall3();
    }
    return 1;
}
}
