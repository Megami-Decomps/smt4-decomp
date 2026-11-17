#include "common.h"
#include "battle/BtlGlobals.h"


extern "C" {
f32 scriptReadStackValueAsFloat(s32 index);
void flags64CSetTarget(BtlCameraA* target, f32 x, f32 y, f32 z);

// Applies the two configured values to the target's range.
u32 battleRangeApplyConfiguredValues(void)
{
    BtlCameraA* object = g_btlCamera;
    if (object == NULL) {
        return 1;
    }
    f32 z = scriptReadStackValueAsFloat(0);
    f32 xy = scriptReadStackValueAsFloat(1);
    flags64CSetTarget(object, xy, xy, z);
    return 1;
}
}
