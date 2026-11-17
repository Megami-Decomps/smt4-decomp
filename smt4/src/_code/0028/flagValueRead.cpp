#include "shard/W5_W5Match7_FlagBanks.h"
#include "code/Code0028.h"

extern "C" {
FlagValueStorage *saveGetUnlockFlagBlock(void);
const FlagValueRange *itemCategoryFindByItemId(s32 id);

// Read either a packed boolean or a halfword from the range's saved flag bank.
s32 flagValueRead(s32 id)
{
    const FlagValueRange *range = itemCategoryFindByItemId(id);
    u8 bankIndex = range ? range->bank : 0;
    if (range == NULL) {
        return 0;
    }
    FlagValueStorage *storage = saveGetUnlockFlagBlock();
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
    id -= range->firstId;
    switch (range->width) {
    case 0: {
        const u8 *flag = &bank[id / 8];
        const s32 bit = id % 8;
        return (*flag & (1u << bit)) != 0;
    }
    case 1:
        return reinterpret_cast<u16 *>(bank)[id];
    }
    return 0;
}
}
