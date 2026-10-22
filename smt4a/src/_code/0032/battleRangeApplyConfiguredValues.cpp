#include "common.h"

struct Flags64C;

extern "C" {
f32 scriptReadStackValueAsFloat(s32 index);
void flags64CSetTarget(Flags64C* target, f32 x, f32 y, f32 z);
extern Flags64C *g_btlCamera;

// Applies the two configured values to the target's range.
u32 battleRangeApplyConfiguredValues(void)
{
    Flags64C* object = g_btlCamera;
    if (object == NULL) {
        return 1;
    }
    f32 z = scriptReadStackValueAsFloat(0);
    f32 xy = scriptReadStackValueAsFloat(1);
    flags64CSetTarget(object, xy, xy, z);
    return 1;
}
}
