/* NON_MATCHING: Retail unrolls all four metric comparisons and retains an unused limit literal. */
#include "battle/BtlMainAccess.h"
#include "battle/btlEffect.h"
extern "C" {
s32 FUN_00293230(void*);

// Returns the largest nonnegative selection metric, or its fallback when none is positive.
s32 FUN_00227668(BtlEffectOwner* owner)
{
    if (owner->slots == NULL || FUN_00293230(static_cast<void *>(btlGetMainState())) != 0) {
        return -1;
    }
    BtlEffectSlotBlock* metrics = owner->slots;
    s32 maximum = 0;
    for (u32 index = 0; index < 4; ++index) {
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
