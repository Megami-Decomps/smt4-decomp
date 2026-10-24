/* NON_MATCHING: same control flow and loads; retail shares the epilogue between the table-null path and the 1.0f fallback and allocates table/index to r5/r4 (built r4/r5), so the tail layout differs */
#include "common.h"

extern "C" {

extern f32 DAT_00536bcc[];

s32 FUN_001517b4(s32 selector, s32 flag);

/* Returns entry `index` of `table` (or of the default table when none is given) if `selector` is valid, else 1.0f. */
f32 FUN_003e40d0(const f32 *table, u32 index, s32 selector)
{
    f32 value = 1.0f;

    if (table != NULL) {
        if (FUN_001517b4(selector, 0) != 0) {
            return table[index];
        }
    } else {
        if (FUN_001517b4(selector, 0) != 0) {
            value = DAT_00536bcc[index];
        }
    }
    return value;
}

} /* extern "C" */
