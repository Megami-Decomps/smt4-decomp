#include "battle/BtlMainAccess.h"
#include "shard/Shard0037.h"

extern "C" {

extern s32 scrGetArg(s32 index);
extern Unit3FC *FUN_003f0e20(void *state, s32 id);
extern u32 gameGetSlotRecord(s32 index);
extern void FUN_004bcd1c(u32 unit, u32 value);
extern void recordRestoreScaledMaximumPair(u32 unit);

/* Script command: for unit `argument 0` (battle roster below 0x6D, else party) runs FUN_004bcd1c with argument 1 and recordRestoreScaledMaximumPair. */
u32 scrCommUnitApply(void)
{
    s32 id = scrGetArg(0);
    u32 value = scrGetArg(1);
    u32 unit;

    if (id < 0x6D) {
        static_cast<void *>(btlGetMainState());
        unit = FUN_003f0e20(static_cast<void *>(btlGetMainState()), id)->unit;
    } else {
        unit = gameGetSlotRecord(id - 0x6D);
    }
    FUN_004bcd1c(unit, value);
    recordRestoreScaledMaximumPair(unit);
    return 1;
}

} /* extern "C" */
