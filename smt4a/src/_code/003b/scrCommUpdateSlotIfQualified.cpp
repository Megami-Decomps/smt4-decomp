#include "battle/BtlMainAccess.h"
#include "shard/Shard003B.h"

extern "C" {

extern void *saveSlotFindSelected(void);
extern s32 bitsAt60Test(void *slot, u32 flag);
extern void FUN_004bcb54(void *slot);
extern void recordSetClampedCurrent(void *slot, s32 value);
extern void saveSlotApplySelected(void *state);

/* Script command: when the slot qualifies, updates it and refreshes the battle state. */
u32 scrCommUpdateSlotIfQualified(void)
{
    void *slot = saveSlotFindSelected();

    if (bitsAt60Test(slot, 1) != 0) {
        FUN_004bcb54(slot);
        recordSetClampedCurrent(slot, 1);
        saveSlotApplySelected(static_cast<void *>(btlGetMainState()));
    }
    return 1;
}

} /* extern "C" */
