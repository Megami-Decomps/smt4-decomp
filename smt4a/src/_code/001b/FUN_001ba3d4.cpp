/* NON_MATCHING: only the order of `movne r0,#0` / `ldrheq` differs in the halfword-or-zero tail (a switch gives that order but adds a `beq` after the bit test). */
#include "shard/W5_W5Match7_FlagBanks.h"
#include "shard/ItemStackLimit.h"

extern "C" {
FlagValueStorage *flagValueGetStorage(void);

// Read a bit or halfword from the bank selected by the flag's range descriptor.
u16 FUN_001ba3d4(s32 id)
{
    const FlagValueRange *range = reinterpret_cast<const FlagValueRange *>(itemCategoryFindByItemId(id));
    u8 bank = range ? range->bank : 0;
    if (range) {
        FlagValueStorage *storage = flagValueGetStorage();
        u8 *data = reinterpret_cast<u8 *>(storage);
        switch (bank) {
        case 0: break;
        case 1: data = storage->bank1; break;
        case 2: data = storage->bank2; break;
        case 3: data = storage->bank3; break;
        case 4: data = storage->bank4; break;
        case 5: data = storage->bank5; break;
        case 6: data = storage->bank6; break;
        case 7: data = storage->bank7; break;
        case 8: data = storage->bank8; break;
        case 9: data = storage->bank9; break;
        case 10: data = storage->bank10; break;
        case 12: data = storage->bank12; break;
        default: data = NULL; break;
        }
        id -= range->firstId;
        if (range->width == 0) {
            const u8 *flag = &data[id / 8];
            const s32 bit = id % 8;
            return (*flag & (1u << bit)) != 0;
        }
        if (range->width != 1) {
            return 0;
        }
        return reinterpret_cast<u16 *>(data)[id];
    }
    return 0;
}
}
