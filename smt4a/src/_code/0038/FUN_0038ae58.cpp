#include "map/mapDepart.h"

extern "C" {
extern GameStateA g_gameState;
s32 scrGetArg(s32 index);
u32 gameFlagIsSet(u32 flag);
void naviMainEnterState4IfActive(void);
void FUN_003b61ec(void);
void commonBgReset(void);
void sub68OwnerCall3(void);
void sysPlaySe(u32 id);

/* Changes the navi/background display mode only when the requested flag differs. */
u32 FUN_0038ae58(void)
{
    s32 enabled = scrGetArg(0);
    if (enabled == 0) {
        if (g_gameState.mapFlags.unk295 != 0) {
            g_gameState.mapFlags.unk295 = 0;
            if (gameFlagIsSet(0x49A) == 0) {
                FUN_003b61ec();
            } else {
                commonBgReset();
            }
            sub68OwnerCall3();
        }
    } else {
        if (g_gameState.mapFlags.unk295 == 0) {
            g_gameState.mapFlags.unk295 = 1;
            naviMainEnterState4IfActive();
            FUN_003b61ec();
            sysPlaySe(0x92);
        }
    }
    return 1;
}
}
