#include "common.h"
extern "C" {
struct ValueTable { u8 unk00[0x5950]; u16 values[1]; };
/* Report whether the selected value lies outside the inclusive one-to-four range. */
s32 saveIsSelectionOutsideRange(const ValueTable *table, u32 index)
{
    s32 outside = 1;

    if ((u32)(table->values[index] - 1) < 4) {
        outside = 0;
    }
    return outside;
}
}
