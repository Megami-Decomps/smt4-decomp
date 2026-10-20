/* A script command context whose step counter at 0x18 is advanced after each command runs. */
#ifndef SHARD_SCRIPTSTEP_H
#define SHARD_SCRIPTSTEP_H

#include "common.h"

typedef struct ScriptStep {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 step;
} ScriptStep;

#endif
