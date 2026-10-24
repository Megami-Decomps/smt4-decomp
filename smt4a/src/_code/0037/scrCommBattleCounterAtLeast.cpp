#include "shard/Shard0037.h"

extern "C" {

extern s32 scrGetArg(s32 index);
extern BtlStateB *btlGetMainState(void);
extern void scrSetResult(s32 value);

/* Script command: result is true when argument 0 is at most the battle counter + 1. */
u32 scrCommBattleCounterAtLeast(void)
{
    s32 value = scrGetArg(0);
    BtlStateB *state = btlGetMainState();

    scrSetResult(value <= (s32)(state->unk45B8 + 1));
    return 1;
}

} /* extern "C" */
