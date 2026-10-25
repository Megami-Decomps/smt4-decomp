#include "battle/BtlMainAccess.h"
#include "shard/Shard0037.h"

extern "C" {

extern s32 scrGetArg(s32 index);

/* Script command: sets the battle's +0x4CE0 to 0 when argument 0 is 0, else -1. */
u32 FUN_00373d08(void)
{
    s32 value = scrGetArg(0);
    BtlStateB *state = reinterpret_cast<BtlStateB *>(btlGetMainState());
    u32 result;

    if (value == 0) {
        result = 0;
    } else {
        result = -1;
    }
    state->unk4CE0 = result;
    return 1;
}

} /* extern "C" */
