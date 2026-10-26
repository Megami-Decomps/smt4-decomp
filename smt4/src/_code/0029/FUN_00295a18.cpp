/* NON_MATCHING: only the predicated `ldrbne` of the range's bank index and the register pair of the final discovery-bit update differ. */
#include "shard/W6_W6Match2_SaveFlags.h"

extern "C" {
void FUN_00348e88(u16 flag);
SavedCounterRange *itemCategoryFindByItemId(u32 flag);
SavedCounterBanks *FUN_00282be4();
u32 recordPackedValue(u32 flag);
}

// Set a saved bit or add to its bounded counter, then mark the entry as discovered.
extern "C" void FUN_00295a18(u32 flag, u32 amount)
{
    if (amount == 0)
        return;
    FUN_00348e88((u16)flag);
    SavedCounterRange *range = itemCategoryFindByItemId(flag);
    if (range != NULL) {
        u8 bankIndex = range->bank;
        SavedCounterBanks *save = FUN_00282be4();
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
        save = FUN_00282be4();
        s32 discovery = flag - 1;
        if ((u32)(discovery >> 3) <= 256)
            save->seenFlags[discovery >> 3] |= 1u << (discovery & 7);
    }
}
