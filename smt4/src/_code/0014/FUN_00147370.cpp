/* NON_MATCHING: instruction selection/order differs: retail nop; compiler ldr r1, [r0, #104]. */
#include "shard/W5_W5Match1_RecordKeys.h"

struct ScalarUpdateWork {
    /* 0x00 */ u8 unk00[0x64];
    /* 0x64 */ f32 cached;
    /* 0x68 */ ScalarDirtyWork *nested;
};

extern "C" {

/* Changes the nested scalar and marks its work area dirty. */
void FUN_00147370(ScalarUpdateWork *work, f32 value)
{
    work->cached = value;
    work->nested->value = value;
    work->nested->flags |= 1;
}

} /* extern "C" */
