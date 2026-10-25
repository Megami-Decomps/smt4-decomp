#include "battle/BtlMainAccess.h"
#include "shard/Shard003B.h"

extern "C" {

extern void *saveSlotFindSelected(void);
extern void FUN_004bcb54(void *slot);
extern void saveSlotApplySelected(void *state);

/* Script command: refreshes the current slot and the battle state. */
u32 scrCommRefreshSlotAndBattle(void)
{
    FUN_004bcb54(saveSlotFindSelected());
    saveSlotApplySelected(static_cast<void *>(btlGetMainState()));
    return 1;
}

} /* extern "C" */
