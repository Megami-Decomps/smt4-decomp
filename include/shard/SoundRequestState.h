/* The request nesting counter at 0x44cf60 and the id of the outermost active request. */
#ifndef SHARD_SOUND_REQUEST_STATE_H
#define SHARD_SOUND_REQUEST_STATE_H

#include "common.h"

struct SoundRequestState {
    /* 0x00 */ s32 depth;
    /* 0x04 */ s32 requestId;
};

extern "C" SoundRequestState DAT_0044cf60;

#endif
