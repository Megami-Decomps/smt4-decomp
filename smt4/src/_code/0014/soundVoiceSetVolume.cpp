#include "shard/W5_W5Match1_RecordKeys.h"

struct ScalarUpdateWork {
    /* 0x00 */ u8 unk00[0x64];
    /* 0x64 */ f32 cached;
    /* 0x68 */ ScalarDirtyWork *nested;
};

extern "C" {

void FUN_0014737c(ScalarDirtyWork *state, f32 value);

/* Caches the volume and passes it on to the nested state (a tail call armlink turned into a branch to the next
 * instruction: the setter follows this function). */
void soundVoiceSetVolume(ScalarUpdateWork *work, f32 value)
{
    work->cached = value;
    FUN_0014737c(work->nested, value);
}

} /* extern "C" */
