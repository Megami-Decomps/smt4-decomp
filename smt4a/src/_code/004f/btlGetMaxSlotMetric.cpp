#include "battle/BtlMainAccess.h"
#include "battle/btlEffect.h"
#include "battle/BattleHelpers_VariantB.h"
extern "C" {

// Returns the largest nonnegative selection metric, or its fallback when none is positive (the minimum is tracked but unused).
s32 btlGetMaxSlotMetric(BtlEffectOwnerA* owner)
{
    if (owner->slots == NULL || btlScriptUnitHasFlags(reinterpret_cast<const BtlMainStateA *>(static_cast<void *>(btlGetMainState()))) != 0) {
        return -1;
    }
    BtlEffectSlotBlock* metrics = owner->slots;
    s32 maximum = 0;
    s32 minimum = 9999;
    for (s32 index = 0; index < 4; ++index) {
        s32 value = metrics->entries[index].unk10;
        if (value >= 0) {
            if (value < minimum) {
                minimum = value;
            }
            if (value > maximum) {
                maximum = value;
            }
        }
    }
    if (maximum <= 0) {
        maximum = metrics->unk190;
    }
    return maximum;
}
}
