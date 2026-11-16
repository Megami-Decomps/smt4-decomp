#include "shard/Shard0034.h"

extern "C" {

extern s16 *saveGetSelectedRecordSlot(s32 index);

/* Number of the 0x18 records whose first halfword is non-zero. */
s32 countNonZeroRecords24(void)
{
    s32 count = 0;
    s32 i;

    for (i = 0; i < 0x18; i++) {
        if (*saveGetSelectedRecordSlot(i) != 0) {
            count++;
        }
    }
    return count;
}

} /* extern "C" */
