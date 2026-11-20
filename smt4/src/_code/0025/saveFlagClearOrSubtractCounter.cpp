#include "shard/W6_W6Match2_SaveFlags.h"

extern "C" {
SavedCounterRange *itemCategoryFindByItemId(u32 flag);
SavedCounterBanks *saveGetUnlockFlagBlock();
}

// Clear a saved bit flag or subtract from a saved halfword counter without underflow.
extern "C" void saveFlagClearOrSubtractCounter(u32 flag, u32 amount)
{
    if (amount == 0)
        return;
    SavedCounterRange *range = itemCategoryFindByItemId(flag);
    u8 bankIndex = range ? range->bank : 0;
    if (range != NULL) {
        SavedCounterBanks *save = saveGetUnlockFlagBlock();
        u8 *bank = savedCounterBank(save, bankIndex);
        s32 index = flag - range->first;
        if (range->elementType == 0) {
            u8 *flag = &bank[index / 8];
            s32 bit = index % 8;
            *flag &= ~(1 << bit);
        } else if (range->elementType == 1) {
            u16 *counter = &((u16 *)bank)[index];
            *counter = *counter < amount ? 0 : *counter - amount;
        }
    }
}
