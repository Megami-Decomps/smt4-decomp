#include "shard/Shard0034.h"

extern "C" {

extern s32 scrGetArg(s32 index);
extern BtlStateB *btlGetMainState(void);
extern void scrSetResult(s32 value);

/* Script command: result is true when the battle's counter + 1 is at most argument 0. */
u32 scrCommBattleCounterAtMost(void)
{
    s32 value = scrGetArg(0);
    BtlStateB *state = btlGetMainState();

    scrSetResult((s32)(state->unk45B8 + 1) <= value);
    return 1;
}

} /* extern "C" */
