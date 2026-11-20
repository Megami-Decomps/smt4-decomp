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
        if (FUN_002e2b38())
            break;
        /* fall through: the scenario guard rejected the entry */
    default:
        return false;
    case 2:
        if (gameFlagIsSet(KIND9_VARIANT2_ALLOW_FLAG))
            return true;
        break;
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
