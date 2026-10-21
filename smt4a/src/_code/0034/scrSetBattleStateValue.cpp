#include "shard/Shard0034.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern BtlStateB *btlGetMainState(void);

/* Script command: stores argument 0 in the battle state at +0x4CE8. */
u32 scrSetBattleStateValue(void)
{
    BtlStateB *state = btlGetMainState();

    state->unk4CE8 = scrGetArg(0);
    return 1;
}

} /* extern "C" */
