/* NON_MATCHING: Retail b 88 differs from recovered pop {r4, pc}. */
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
extern s32 gameFlagIsSet(u32 flag);

// Tests the variant-specific flags and current battle state for eligibility.
u32 FUN_002b24fc(void)
{
    if (gameFlagIsSet(0x4F8) != 0) {
        return 0;
    }

    switch (flagSelectVariant()) {
    case 1:
        if (FUN_002e2b38() == 0) {
            return 0;
        }
        break;
    case 2:
        if (gameFlagIsSet(0x4DB) != 0) {
            return 1;
        }
        break;
    default:
        return 0;
    }

    BattleMainView* battle = g_btlMain;
    if (battle != 0) {
        if (gameFlagIsSet(0x1FD) != 0 || battle->unkAC == 1) {
            return 1;
        }
    }
    return 0;
}

} // extern "C"
