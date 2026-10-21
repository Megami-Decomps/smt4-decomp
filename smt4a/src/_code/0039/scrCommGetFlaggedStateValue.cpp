/* NON_MATCHING: retail uses `moveq r0, #1` where armcc emits `beq 1c`. */
#include "common.h"

extern "C" {

struct ResultState { u8 unk00[0x78]; s32 value; };
extern ResultState g_battleViewState;
s32 gameFlagIsSet(u32 flag);
void scrSetResult(s32 result);

s32 scrCommGetFlaggedStateValue(u32 flag)
{
    if (gameFlagIsSet(flag)) {
        scrSetResult(g_battleViewState.value);
    }
    return 1;
}

} /* extern "C" */
