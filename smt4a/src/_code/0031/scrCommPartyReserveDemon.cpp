#include "shard/Shard0031.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {

s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
s32 partyFindSlotById(u32 id);
u32 isPartySlotBit1Clear(s32 index);

// Script command: put the demon with the argument's ID into the first free reserve slot;
// the result is 0 when it isn't eligible or is already reserved.
u32 scrCommPartyReserveDemon(void)
{
    s32 slot = partyFindSlotById((u16)scrGetArg(0));
    if (slot < 0 || isPartySlotBit1Clear(slot) == 0) {
        scrSetResult(0);
        return 1;
    }
    s32 i;
    for (i = 0; i < 3; i++) {
        if (gameGetSlotTable()->reserve[i] == slot) {
            scrSetResult(0);
            return 1;
        }
    }
    for (i = 0; i < 3; i++) {
        if (gameGetSlotTable()->reserve[i] < 0) {
            gameGetSlotTable()->reserve[i] = slot;
            break;
        }
    }
    scrSetResult(1);
    return 1;
}

} /* extern "C" */
