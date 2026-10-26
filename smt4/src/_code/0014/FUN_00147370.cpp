/* NON_MATCHING: retail has a linker NOP between the load of the nested work pointer and its `flags` load (a call to an empty function taking that pointer, from the same multifile run: r0 and s0 stay live across it); the callee is not identified. */
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
