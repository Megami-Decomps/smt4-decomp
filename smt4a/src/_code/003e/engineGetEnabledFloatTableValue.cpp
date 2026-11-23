#include "ui/FloatTableLookup.h"

extern "C" {

s32 padQueryLogicalKey(s32 selector, s32 flag);

/* Returns entry `index` of `table` (or of the default table when none is given) if `selector` is valid, else 1.0f. */
f32 engineGetEnabledFloatTableValue(const f32 *table, u32 index, s32 selector)
{
    f32 value = 1.0f;

    if (table == NULL) {
        if (padQueryLogicalKey(selector, 0) != 0) {
            value = engineFloatTableValue(table, index);
        }
    } else if (padQueryLogicalKey(selector, 0) != 0) {
        return engineFloatTableValue(table, index);
    }
    return value;
}

} /* extern "C" */
