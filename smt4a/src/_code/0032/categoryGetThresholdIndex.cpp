#include "common.h"
#include "ui/UiControl_Smt4a.h"

extern "C" {

extern u8 DAT_0053625b[11];  /* ascending thresholds */

/* Returns the index of the first threshold the value does not exceed, or 0 when it is within the first threshold or exceeds all. */
u32 categoryGetThresholdIndex(u32 value)
{
    u32 i;

    if (value <= DAT_0053625b[0]) {
        return 0;
    }
    i = 1;
    do {
        if (value <= DAT_0053625b[i]) {
            return i & 0xFF;
        }
        if (value <= DAT_0053625b[i + 1]) {
            return (i + 1) & 0xFF;
        }
        i += 2;
    } while ((s32)i < 11);
    return 0;
}

} /* extern "C" */
