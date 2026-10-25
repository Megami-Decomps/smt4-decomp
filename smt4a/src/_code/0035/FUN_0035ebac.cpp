#include "battle/BtlMainAccess.h"
#include "shard/Shard0035.h"

extern "C" {

extern s32 scrGetArg(s32 index);
extern void scrSetResult(s32 value);

/* Script command: result is true when the battle's +0x2002 value is at most argument 0. */
u32 FUN_0035ebac(void)
{
    s32 value = scrGetArg(0);
    BtlStateB *state = reinterpret_cast<BtlStateB *>(btlGetMainState());

    scrSetResult(state->unk2002 <= value);
    return 1;
}

} /* extern "C" */
