#include "common.h"

struct Flags64C;

extern "C" {
f32 FUN_00275b10(s32 index);
void flags64CSetTarget(Flags64C* target, f32 x, f32 y, f32 z);

// Applies the two configured values to the target's range.
u32 battleRangeApplyConfiguredValues(Flags64C* const* target)
{
    Flags64C* object = *target;
    if (object == NULL) {
        return 1;
    }
    f32 z = FUN_00275b10(0);
    f32 xy = FUN_00275b10(1);
    flags64CSetTarget(object, xy, xy, z);
    return 1;
}
}
