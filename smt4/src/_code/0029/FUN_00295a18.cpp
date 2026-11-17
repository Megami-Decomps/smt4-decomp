/* NON_MATCHING: only the final discovery-bit update's registers differ (retail loads the byte into r3 and the 1 into r2); same remaining difference as smt4a flagValueAdd. */
#include "shard/W6_W6Match2_SaveFlags.h"

extern "C" {
void FUN_00348e88(u16 flag);
SavedCounterRange *itemCategoryFindByItemId(u32 flag);
SavedCounterBanks *saveGetUnlockFlagBlock();
u32 recordPackedValue(u32 flag);
}

// Set a saved bit or add to its bounded counter, then mark the entry as discovered.
extern "C" void FUN_00295a18(u32 flag, u32 amount)
{
    if (amount == 0)
        return;
    FUN_00348e88((u16)flag);
    SavedCounterRange *range = itemCategoryFindByItemId(flag);
    u8 bankIndex = range ? range->bank : 0;
    if (range != NULL) {
        SavedCounterBanks *save = saveGetUnlockFlagBlock();
        u8 *bank = savedCounterBank(save, bankIndex);
        s32 index = flag - range->first;
        switch (range->elementType) {
        case 0: {
            u8 *byte = &bank[index / 8];
            *byte |= 1u << (index % 8);
            break;
        }
        case 1: {
            u32 maximum = recordPackedValue(flag);
            u16 *counter = &((u16 *)bank)[index];
            u32 value = *counter + amount;
            if (value >= maximum)
                *counter = maximum;
            else
                *counter = value;
            break;
        }
        }
        save = saveGetUnlockFlagBlock();
        s32 discovery = flag - 1;
        if ((u32)(discovery >> 3) <= 256)
            save->seenFlags[discovery >> 3] |= (u8)(1u << (discovery & 7));
    }
}
