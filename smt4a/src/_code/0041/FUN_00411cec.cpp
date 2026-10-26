/* NON_MATCHING: eligible-party masks and random-target register scheduling differ. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/lcgRandomRange.h"

namespace {
struct RandomPartyTargetMasks { u64 required, excluded; };
}
extern "C" {
extern RandomPartyTargetMasks DAT_00573c58;
void __aeabi_memset4(void *memory, u32 bytes, s32 value);
void FUN_004fdb18(s32 first, s32 second, BattleRosterRecordA *target, u32 effect, s32 mode);

/* Independently select eligible party members, guaranteeing at least one target if any exist. */
void FUN_00411cec(void)
{
    BtlMainStateA *battle = btlGetMainState();
    s32 candidates[4];
    __aeabi_memset4(candidates, sizeof(candidates), -1);
    s32 count = 0;
    for (s32 index = 0; index < 4; ++index) {
        BtlCombatantEntryA *entry = &battle->entries[index];
        if ((entry->flags & DAT_00573c58.required) != 0 &&
            (entry->flags & DAT_00573c58.excluded) == 0 && entry->hp != 0 &&
            (entry->statusFlags == 0 || entry->statusFlags == 4))
            candidates[count++] = index;
    }
    if (count != 0) {
        s32 selected = 0;
        for (s32 index = 0; index < count; ++index) {
            s32 candidate = candidates[index];
            if (candidate >= 0) {
                BtlCombatantEntryA *entries = battle->entries;
                if (lcgRandomRange(99) < 61) {
                    FUN_004fdb18(0, 0, &battle->roster[entries[candidate].unitIndex], 0x10, 0);
                    selected++;
                }
            }
        }
        if (selected != 0)
            return;
        s32 choice = lcgRandomRange(static_cast<u16>(count - 1));
        FUN_004fdb18(0, 0, &battle->roster[battle->entries[candidates[choice]].unitIndex], 0x10, 0);
    }
}
}
