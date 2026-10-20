/* Plays one of two three-part effect sets (ids 0x8e-0x90 or 0x9e-0xa0) at the given speed, then restores speed 1.0. */
#include "common.h"

extern "C" {

void efctSetSpeed(f32 speed);
void FUN_001835b4(s32 category, s32 group, s32 id, u32 target, u32 slot, s32 index);

void efctPlayVariantSet(u32 unused, u32 target, u32 slot, s32 index, s32 useFirstSet, s32 useSecondSet, f32 speed)
{
    efctSetSpeed(speed);
    if (useFirstSet != 0) {
        FUN_001835b4(2, 0x32, 0x8e, target, slot, index + 1);
        FUN_001835b4(2, 0x32, 0x8f, target, slot, index);
        FUN_001835b4(2, 0x32, 0x90, target, slot, index + 2);
    } else if (useSecondSet != 0) {
        FUN_001835b4(2, 0x32, 0x9e, target, slot, index + 1);
        FUN_001835b4(2, 0x32, 0x9f, target, slot, index);
        FUN_001835b4(2, 0x32, 0xa0, target, slot, index + 2);
    }
    efctSetSpeed(1.0f);
}

} /* extern "C" */
