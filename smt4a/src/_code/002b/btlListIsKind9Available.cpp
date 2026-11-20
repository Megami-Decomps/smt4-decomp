/* NON_MATCHING: retail returns 0 from the variant-1 guard through a branch to the shared `mov r0, #0; pop`;
 * the build pops directly with r0 already 0 (2 lines). Written as its proven sibling FUN_002b25a4. */
#include "battle/BtlGlobals.h"
#include "gamedata/GameDataAccess_Smt4a.h"
#include "gamedata/GameDataAccess_VariantG.h"
#include "shard/W6_W6Match3_FormatBuffer.h"

extern "C" {

enum {
    KIND9_BLOCK_FLAG = 0x4F8,
    KIND9_VARIANT2_ALLOW_FLAG = 0x4DB,
    KIND9_ALLOW_FLAG = 0x1FD
};

/* Tests the scenario flags and battle state for the kind-9 list entry. */
s32 btlListIsKind9Available(void)
{
    if (gameFlagIsSet(KIND9_BLOCK_FLAG)) {
        return false;
    }

    switch (flagSelectVariant()) {
    case 1:
        if (!FUN_002e2b38()) {
            return false;
        }
        break;
    case 2:
        if (gameFlagIsSet(KIND9_VARIANT2_ALLOW_FLAG)) {
            return true;
        }
        break;
    default:
        return false;
    }

    BtlMainStateA *battle = g_btlMain.state;
    if (battle == NULL) {
        return false;
    }
    if (gameFlagIsSet(KIND9_ALLOW_FLAG) || battle->commandFilter.availabilityOverride == 1) {
        return true;
    }
    return false;
}

} /* extern "C" */
