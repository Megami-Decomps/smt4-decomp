/* NON_MATCHING: retail uses `mov r0, #0` where armcc emits `mov r0, #0`. */
#include "common.h"

extern "C" {

void gameDataBlocksSetWord(s32 value);
void scrSetResult(s32 value);

s32 scrCommClearGameDataWord(void)
{
    gameDataBlocksSetWord(0);
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
