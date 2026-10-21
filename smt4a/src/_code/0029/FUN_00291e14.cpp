/* NON_MATCHING: retail uses ldr r1, [pc, #48] where the compiled block uses ldr r0, [pc, #68]. */
#include "common.h"

struct BattleMain {
    u8 unk00[0x45a0];
    u32 flagsLow;  // 0x45a0
    u32 flagsHigh; // 0x45a4
};

extern "C" {
extern BattleMain* g_btlMain;
extern u32 DAT_00573ae8;
extern u32 DAT_00573aec;

u32 FUN_00291e14(void)
{
    BattleMain* battle = g_btlMain;
    if (battle == NULL) {
        return 0;
    }

    u32 selectedFlags = (battle->flagsLow & DAT_00573ae8)
                      | (battle->flagsHigh & DAT_00573aec);
    return selectedFlags != 0;
}
}
