#include "shard/Block57f248.h"

extern "C" {

/* Returns 1 when the record's id equals `id`, its mode is 1 and its counter has not gone positive. */
u32 FUN_001802d4(u32 id)
{
    u8 match;
    u32 result;

    match = (s32)g_ifTouch.record->unk64E == id;
    if (match) {
        id = (u32)g_ifTouch.record->unk008;
    }
    if ((match && id == 1) && (g_ifTouch.record->unk650 < 1)) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
