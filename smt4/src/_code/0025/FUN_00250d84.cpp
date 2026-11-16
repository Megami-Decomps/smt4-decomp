/* NON_MATCHING: retail predicates the bank-index load (ldrbne) above the null branch, and computes the bit position after the byte address (built: bic into ip first). */
#include "shard/W6_W6Match2_SaveFlags.h"

extern "C" {
SavedCounterRange *itemCategoryFindByItemId(u32 flag);
SavedCounterBanks *saveGetUnlockFlagBlock();
}

// Clear a saved bit flag or subtract from a saved halfword counter without underflow.
extern "C" void FUN_00250d84(u32 flag, u32 amount)
{
    if (amount == 0)
        return;
    SavedCounterRange *range = itemCategoryFindByItemId(flag);
    if (range != NULL) {
        u8 bankIndex = range->bank;
        SavedCounterBanks *save = saveGetUnlockFlagBlock();
        u8 *bank = savedCounterBank(save, bankIndex);
        s32 index = flag - range->first;
        if (range->elementType == 0) {
            bank[index / 8] &= ~(1 << (index % 8));
        } else if (range->elementType == 1) {
            u16 *counter = &((u16 *)bank)[index];
            *counter = *counter < amount ? 0 : *counter - amount;
        }
    }
}
