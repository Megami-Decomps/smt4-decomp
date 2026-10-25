#include "common.h"
#include "util/CalleeContracts.h"
#include "util/ArrayContainsU16.h"

extern "C" {

/* Returns whether the halfword array `values` of `count` entries contains `value`. */
s32 arrayContainsU16(const u16 *values, s32 count, u32 value)
{
    for (s32 i = 0; i < count; i++) {
        if (values[i] == value) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
