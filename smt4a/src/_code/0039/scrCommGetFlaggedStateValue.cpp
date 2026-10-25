/* NON_MATCHING: the flag argument (1232) and branch layout match; retail loads g_battleViewState's address with a predicated `ldrne` before the `moveq r0, #1`, the build loads it after the branch. */
#include "battle/btlView.h"

extern "C" {

extern BattleViewState g_battleViewState;
s32 gameFlagIsSet(u32 flag);
void scrSetResult(s32 result);

s32 scrCommGetFlaggedStateValue(void)
{
    if (!gameFlagIsSet(1232)) {
        return 1;
    }
    scrSetResult(g_battleViewState.unk78);
    return 1;
}

} /* extern "C" */
