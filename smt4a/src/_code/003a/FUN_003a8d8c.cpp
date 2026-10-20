#include "shard/Shard003A.h"

extern "C" {

extern s32 scrGetArg(s32 index);
extern BtlStateB *btlGetMainState(void);
extern void scrSetResult(s32 value);

/* Script command: result is true when the battle's +0x2006 value is at most argument 0. */
u32 FUN_003a8d8c(s32 argIndex)
{
    s32 value = scrGetArg(argIndex);
    BtlStateB *state = btlGetMainState();

    scrSetResult(state->unk2006 <= value);
    return 1;
}

} /* extern "C" */
