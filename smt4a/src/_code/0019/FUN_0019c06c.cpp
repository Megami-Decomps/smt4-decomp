#include "common.h"

struct ValueRange {
    u32 low;  // 0x00
    u32 high; // 0x04
    u32 unk08;
};

extern "C" {

extern ValueRange DAT_00531158[12]; /* 0x531158 */

// Find the range of the table that contains the value (NULL when none does).
ValueRange *FUN_0019c06c(u32 value)
{
    for (s32 i = 0; i < 12; i += 2) {
        if (DAT_00531158[i].low <= value) {
            if (value <= DAT_00531158[i].high) {
                return &DAT_00531158[i];
            }
        }
        if (DAT_00531158[i + 1].low <= value && value <= DAT_00531158[i + 1].high) {
            return &DAT_00531158[i + 1];
        }
    }
    return NULL;
}

} /* extern "C" */
