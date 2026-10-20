#include "shard/Block57f248.h"

extern "C" {

/* Returns the mode byte of the record at 0x57F248 when its id equals `id`, otherwise 0. */
u8 FUN_00284140(s32 id)
{
    u8 mode;

    if (DAT_0057f248.record->unk64E == id) {
        mode = DAT_0057f248.record->unk008;
    } else {
        mode = 0;
    }
    return mode;
}

} /* extern "C" */
