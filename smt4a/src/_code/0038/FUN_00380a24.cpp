/* NON_MATCHING: retail 56 vs built 58 rows; paired eligibility-mask loads and battle-slot register allocation differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
extern u64 DAT_005710e8;
extern u64 DAT_005710f8;
extern u64 DAT_00571108;
BtlMainStateA *btlGetMainState(void);
s32 partyFindSlotById(u16);
u32 scrGetArg(u32);
void scrSetResult(s32);

u32 FUN_00380a24(void)
{
    u32 id = scrGetArg(0);
    s32 result = -1;
    for (s32 index = 0; index < 109; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if ((flags & DAT_005710e8) != 0 && (flags & DAT_00571108) == 0 &&
            (flags & DAT_005710f8) != 0 && entry->unitIndex >= 0 &&
            entry->sourceRecord != NULL && entry->sourceRecord->id == id) {
            result = entry->unitIndex;
            scrSetResult(result);
            return 1;
        }
    }
    s32 partySlot = partyFindSlotById(static_cast<u16>(id));
    if (partySlot >= 0)
        result = partySlot + 109;
    scrSetResult(result);
    return 1;
}
}
