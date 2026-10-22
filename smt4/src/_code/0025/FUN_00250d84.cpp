/* NON_MATCHING: counter-bank layout and saturating decrement are recovered; predicated metadata loads and bit-mask scratch-register scheduling differ. */
#include "shard/W6_W6Match2_SaveFlags.h"

extern "C" {
SavedCounterRange *FUN_002b4748(u32 flag);
SavedCounterBanks *FUN_00282be4();
}

// Clear a saved bit flag or subtract from a saved halfword counter without underflow.
extern "C" void FUN_00250d84(u32 flag, u32 amount)
{
    if (amount == 0)
        return;
    SavedCounterRange *range = FUN_002b4748(flag);
    if (range == NULL)
        return;
    u8 bankIndex = range->bank;
    SavedCounterBanks *save = FUN_00282be4();
    u8 *bank = savedCounterBank(save, bankIndex);
    s32 index = flag - range->first;
    if (range->elementType == 0) {
        u8 *byte = &bank[index / 8];
        *byte &= ~(1u << (index % 8));
    } else if (range->elementType == 1) {
        u16 *counter = &((u16 *)bank)[index];
        *counter = *counter < amount ? 0 : *counter - amount;
    }
}
