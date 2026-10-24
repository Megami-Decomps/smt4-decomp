#include "shard/SoundRequestState.h"

extern "C" {

void FUN_002c58c8(s32 channel, s32 sound);

/* Begins a nested request: the outermost one records the request id and plays the sound for ids 0x65..0x67. */
void FUN_00240cec(s32 requestId)
{
    if (DAT_0044cf60.depth == 0) {
        DAT_0044cf60.requestId = requestId;
        if (requestId == 0x65) {
            FUN_002c58c8(0x1c, 6);
        }
        if (DAT_0044cf60.requestId == 0x66) {
            FUN_002c58c8(0x1c, 7);
        }
        if (DAT_0044cf60.requestId == 0x67) {
            FUN_002c58c8(0x1c, 8);
        }
    }
    DAT_0044cf60.depth++;
}

} /* extern "C" */
