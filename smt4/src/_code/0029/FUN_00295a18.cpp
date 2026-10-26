/* NON_MATCHING: saturating counter updates and discovery flags are recovered; branch ordering, register allocation and discovery-bit shifts differ. */
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
    if (range == NULL)
        return;
    u8 bankIndex = range->bank;
    SavedCounterBanks *save = FUN_00282be4();
    u8 *bank = savedCounterBank(save, bankIndex);
    s32 index = flag - range->first;
    if (range->elementType != 0) {
        if (range->elementType == 1) {
            u32 maximum = recordPackedValue(flag);
            u16 *counter = &((u16 *)bank)[index];
            u32 value = *counter + amount;
            if (value >= maximum)
                *counter = maximum;
            else
                *counter = value;
        }
    } else {
        u8 *byte = &bank[index / 8];
        *byte |= 1u << (index % 8);
    }
    save = FUN_00282be4();
    s32 discovery = flag - 1;
    u32 byte = discovery >> 3;
    if (byte < 257)
        save->seenFlags[byte] |= 1u << (discovery & 7);
}
