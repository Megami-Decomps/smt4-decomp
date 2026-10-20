#include "shard/Shard0037.h"

extern "C" {

extern s32 scrGetArg(s32 index);
extern BtlStateB *btlGetMainState(void);
extern void scrSetResult(u32 value);

/* Script command: result is entry `argument 0` of the battle table at +0x23A4. */
u32 scrCommGetBattleTable23A4(void)
{
    BtlStateB *state = btlGetMainState();
    s32 index = scrGetArg(0);

    scrSetResult(state->table23A4[index]);
    return 1;
}

} /* extern "C" */
