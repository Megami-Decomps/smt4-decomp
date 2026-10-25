/* NON_MATCHING: initial bank load is not predicated; bit-mask register and false-result return branch differ. */
#include "shard/W5_W5Match7_FlagBanks.h"
#include "util/FUN_0028fb40.h"

extern "C" {
FlagValueStorage *FUN_00282be4(void);
const FlagValueRange *FUN_002b4748(s32 id);

// Read either a packed boolean or a halfword from the range's saved flag bank.
u16 FUN_0028fb40(s32 id)
{
    const FlagValueRange *range = FUN_002b4748(id);
    if (range == NULL) {
        return 0;
    }
    u8 bankIndex = range->bank;
    FlagValueStorage *storage = FUN_00282be4();
    u8 *bank;
    switch (bankIndex) {
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
    case 11: bank = storage->bank12; break;
    default: bank = NULL; break;
    }
    s32 index = id - range->firstId;
    switch (range->width) {
    case 0:
        return (bank[index / 8] & (1 << (index % 8))) != 0;
    case 1:
        return reinterpret_cast<u16 *>(bank)[index];
    default:
        return 0;
    }
}
}
