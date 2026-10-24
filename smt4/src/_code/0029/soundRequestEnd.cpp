#include "shard/SoundRequestState.h"

extern "C" {

void asdTMTexTableReleaseNode(s32 channel, s32 sound);

/* Ends a nested request: the outermost one releases the sound for ids 0x65..0x67 and clears the request id. */
void soundRequestEnd(void)
{
    DAT_0044cf60.depth--;
    if (DAT_0044cf60.depth == 0) {
        if (DAT_0044cf60.requestId == 0x65) {
            asdTMTexTableReleaseNode(0x1c, 6);
        }
        if (DAT_0044cf60.requestId == 0x66) {
            asdTMTexTableReleaseNode(0x1c, 7);
        }
        if (DAT_0044cf60.requestId == 0x67) {
            asdTMTexTableReleaseNode(0x1c, 8);
        }
        DAT_0044cf60.requestId = 0;
    }
}

} /* extern "C" */
