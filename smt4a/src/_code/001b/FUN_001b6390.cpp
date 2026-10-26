/* NON_MATCHING: retail has a lone nop (a call to an empty function, e.g. FUN_001b5b88, that armlink NOPed) between the nested-pointer load and the flag read-modify-write with s0 kept in a caller-saved register and no lr save; a multifile call to the empty function still pushes lr and stores before the nop. */
#include "shard/W5_W5Match1_RecordKeys.h"

struct ScalarUpdateWork {
    /* 0x00 */ u8 unk00[0x64];
    /* 0x64 */ f32 cached;
    /* 0x68 */ ScalarDirtyWork *nested;
};

extern "C" {

/* Changes the nested scalar and marks its work area dirty. */
void FUN_001b6390(ScalarUpdateWork *work, f32 value)
{
    work->cached = value;
    work->nested->value = value;
    work->nested->flags |= 1;
}

} /* extern "C" */
