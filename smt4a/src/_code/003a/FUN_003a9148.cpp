#include "battle/BtlMainAccess.h"
#include "shard/Shard003A.h"

extern "C" {

extern void scrSetResult(s32 value);

/* Script command: result is the battle's value at +0x4CE0, clamped to 0. */
u32 FUN_003a9148(void)
{
    s32 value = reinterpret_cast<BtlStateB *>(btlGetMainState())->unk4CE0;

    if (value < 0) {
        value = 0;
    }
    scrSetResult(value);
    return 1;
}

} /* extern "C" */
