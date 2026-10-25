#include "battle/BtlMainAccess.h"
#include "shard/Shard0038.h"

extern "C" {

extern s32 scrGetArg(s32 index);
extern void scrSetResult(u32 value);

/* Script command: result is 1 when argument 0 is set and the battle's two values at +0x4E58/+0x4E5C differ. */
u32 scrCommBattleValuesDiffer(void)
{
    s32 enabled = scrGetArg(0);
    u32 result = 0;
    BtlStateB *state = reinterpret_cast<BtlStateB *>(btlGetMainState());

    if (enabled != 0 && state->unk4E58 != state->unk4E5C) {
        result = 1;
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */
