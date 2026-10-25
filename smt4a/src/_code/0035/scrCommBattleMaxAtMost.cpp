#include "battle/BtlMainAccess.h"
#include "shard/Shard0035.h"

extern "C" {

extern s32 scrGetArg(s32 index);
extern void scrSetResult(s32 value);

/* Script command: result is true when the larger of the battle's two values at +0x4C70/+0x4C72 is at most argument 0. */
u32 scrCommBattleMaxAtMost(void)
{
    s32 limit = scrGetArg(0);
    s16 first = reinterpret_cast<BtlStateB *>(btlGetMainState())->unk4C70;
    s32 larger = first;
    BtlStateB *state = reinterpret_cast<BtlStateB *>(btlGetMainState());

    if (larger < state->unk4C72) {
        larger = state->unk4C72;
    }
    scrSetResult(larger <= limit);
    return 1;
}

} /* extern "C" */
