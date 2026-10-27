/* NON_MATCHING: retail returns 0 from the variant-1 guard through a branch to the shared `mov r0,#0; pop` (b 88); the build pops directly with r0 already 0. */
#include "common.h"
#include "shard/W6_W6Match3_FormatBuffer.h"
#include "gamedata/GameDataAccess_Smt4a.h"

// Private view of the battle state fields used by this function.
struct BattleMainView {
    u8 unk00[0xAC]; // 0x00
    s32 unkAC;     // 0xAC
};

extern "C" {
extern BattleMainView* g_btlMain;
extern bool gameFlagIsSet(u32 flag);

// Tests the variant-specific flags and current battle state for eligibility.
bool FUN_002b24fc(void)
{
    if (gameFlagIsSet(0x4F8)) {
        return false;
    }

    switch (flagSelectVariant()) {
    case 1:
        if (!FUN_002e2b38()) {
            return false;
        }
        break;
    case 2:
        if (gameFlagIsSet(0x4DB)) {
            return true;
        }
        break;
    default:
        return false;
    }

    BattleMainView* battle = g_btlMain;
    if (battle == 0) {
        return false;
    }
    if (gameFlagIsSet(0x1FD) || battle->unkAC == 1) {
        return true;
    }
    return false;
}

} // extern "C"
