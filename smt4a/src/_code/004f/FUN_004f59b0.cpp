/* NON_MATCHING: unroll matches; retail hoists the fourth entry's load above the compares and keeps an unused 9999 literal. */
#include "battle/BtlMainAccess.h"
#include "battle/btlEffect.h"
#include "battle/BattleHelpers_VariantB.h"
extern "C" {

// Returns the largest nonnegative selection metric, or its fallback when none is positive.
s32 FUN_004f59b0(BtlEffectOwnerA* owner)
{
    if (owner->slots == NULL || btlScriptUnitHasFlags(reinterpret_cast<const BtlMainStateA *>(static_cast<void *>(btlGetMainState()))) != 0) {
        return -1;
    }
    BtlEffectSlotBlock* metrics = owner->slots;
    s32 maximum = 0;
    for (s32 index = 0; index < 4; index++) {
        s32 value = metrics->entries[index].unk10;
        if (value >= 0 && value > maximum) {
            maximum = value;
        }
    }
    if (maximum <= 0) {
        maximum = metrics->unk190;
    }
    return maximum;
}
}