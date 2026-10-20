#include "common.h"

extern "C" {

extern u8 DAT_00536271[11]; /* 0x536271 */

/* Index of the first threshold in the table that reaches value (0 when none does). */
u32 thresholdIndexFind(u32 value)
{
    u32 i;

    if (DAT_00536271[0] < value) {
        i = 1;
        do {
            if (DAT_00536271[i] >= value) {
                return i & 0xff;
            }
            if (DAT_00536271[i + 1] >= value) {
                return (i + 1) & 0xff;
            }
            i += 2;
        } while ((s32)i < 11);
    }
    return 0;
}

} /* extern "C" */
