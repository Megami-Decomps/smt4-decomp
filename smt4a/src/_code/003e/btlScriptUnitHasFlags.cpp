#include "battle/BattleHelpers_VariantB.h"
#include "battle/BtlScriptUnitFlags.h"

extern "C" {

s32 btlScriptUnitHasFlags(const BtlMainStateA *)
{
    return btlScriptUnitHasFlagsInline();
}

} /* extern "C" */
