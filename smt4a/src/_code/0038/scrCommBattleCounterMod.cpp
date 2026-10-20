#include "shard/Shard0038.h"

extern "C" {

extern s32 scrGetArg(s32 index);
extern BtlStateB *btlGetMainState(void);
extern void scrSetResult(s32 value);

/* Script command: result is (battle counter + 1) modulo argument 0. */
u32 scrCommBattleCounterMod(s32 argIndex)
{
    s32 modulus = scrGetArg(argIndex);
    BtlStateB *state = btlGetMainState();

    scrSetResult((state->unk45B8 + 1) % modulus);
    return 1;
}

} /* extern "C" */
