#include "shard/Block57f248.h"

extern "C" {

/* Returns 1 when the record's id equals `id`, its mode is 1 or 2, and its counter is below 1 or at 0xF plus a multiple of 4. */
u32 FUN_001822ec(s32 id)
{
    s32 counter;

    if (((DAT_0057f248.record->unk64E == id) &&
         (DAT_0057f248.record->unk008 == 1 || DAT_0057f248.record->unk008 == 2)) &&
        ((counter = DAT_0057f248.record->unk650, counter < 1) ||
         ((counter >= 0xF && (((counter - 0xFU) & 3) == 0))))) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
