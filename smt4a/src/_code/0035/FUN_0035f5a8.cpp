/* NON_MATCHING: retail uses `ldm r2, {r1, r2}` where armcc emits `mov r1, r0`. */
#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

struct BattleState { u8 unk0000[0x45a0]; u32 mask[2]; };
extern u32 DAT_00570dc8[2];
void sysPlaySe(s32 sound);

s32 FUN_0035f5a8(void)
{
    BattleState *state = reinterpret_cast<BattleState *>(btlGetMainState());
    state->mask[0] |= DAT_00570dc8[0];
    state->mask[1] |= DAT_00570dc8[1];
    sysPlaySe(223);
    return 1;
}

} /* extern "C" */
