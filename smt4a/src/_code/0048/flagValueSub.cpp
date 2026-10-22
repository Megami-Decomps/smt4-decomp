/* NON_MATCHING: the bank load is not predicated before the null branch, and halfword/bit-clear pointer registers differ. */
#include "shard/W5_W5Match7_FlagBanks.h"

extern "C" const FlagValueRange *FUN_0019c06c(u32 id);
extern "C" FlagValueStorage *FUN_001bce18(void);

/* Clear a bit flag or subtract from a halfword flag without underflowing it. */
extern "C" void flagValueSub(s32 id, u32 amount)
{
    if (amount == 0) {
        return;
    }
    const FlagValueRange *range = FUN_0019c06c(id);
    if (range != NULL) {
        u8 bankId = range->bank;
        FlagValueStorage *storage = FUN_001bce18();
        u8 *bank;
        switch (bankId) {
        case 0: bank = storage->bank0; break;
        case 1: bank = storage->bank1; break;
        case 2: bank = storage->bank2; break;
        case 3: bank = storage->bank3; break;
        case 4: bank = storage->bank4; break;
        case 5: bank = storage->bank5; break;
        case 6: bank = storage->bank6; break;
        case 7: bank = storage->bank7; break;
        case 8: bank = storage->bank8; break;
        case 9: bank = storage->bank9; break;
        case 10: bank = storage->bank10; break;
        case 12: bank = storage->bank12; break;
        default: bank = NULL; break;
        }
        s32 index = id - range->firstId;
        if (range->width == 0) {
            bank[index / 8] &= ~(1 << (index % 8));
            return;
        }
        if (range->width == 1) {
            u16 *value = reinterpret_cast<u16 *>(bank) + index;
            u32 remaining = *value;
            if (remaining < amount) {
                remaining = 0;
            } else {
                remaining -= amount;
            }
            *value = remaining;
        }
    }
}
