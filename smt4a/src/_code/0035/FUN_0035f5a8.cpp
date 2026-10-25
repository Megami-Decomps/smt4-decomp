/* NON_MATCHING: retail uses `ldm r2, {r1, r2}` where armcc emits `mov r1, r0`. */
#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

extern u32 DAT_00570dc8[2];
void sysPlaySe(s32 sound);

s32 FUN_0035f5a8(void)
{
    BtlMainStateA *state = btlGetMainState();
    state->stateFlags.words[0] |= DAT_00570dc8[0];
    state->stateFlags.words[1] |= DAT_00570dc8[1];
    sysPlaySe(223);
    return 1;
}

} /* extern "C" */
