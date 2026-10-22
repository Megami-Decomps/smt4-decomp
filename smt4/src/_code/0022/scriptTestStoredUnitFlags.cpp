#include "shard/W6_W6Match5_DevilSort.h"
extern "C" {
u32 scrGetArg(u32);
void scrSetResult(s32);
s32 partyHasStoredDemon(u16);
s32 partyFindActiveSlotById(u16);
GameUnitSortRecord* gameGetUnitRecord(s32);
u32 flagWordTestBit(const void*, u32);

// Reports absent stored demons separately from the active slot's flagged state.
u32 scriptTestStoredUnitFlags(void)
{
    u32 id = scrGetArg(0);
    s32 result = 0;
    if (id != 0) {
        if (partyHasStoredDemon((u16)id) == 0) {
            result = -1;
        } else {
            s32 slot = partyFindActiveSlotById((u16)id);
            if (flagWordTestBit(gameGetUnitRecord(slot), 10) != 0 ||
                flagWordTestBit(gameGetUnitRecord(slot), 1) != 0 ||
                flagWordTestBit(gameGetUnitRecord(slot), 2) != 0) {
                result = 1;
            }
        }
    }
    scrSetResult(result);
    return 1;
}
}
