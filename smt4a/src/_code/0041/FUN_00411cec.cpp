/* NON_MATCHING: 79 lines (104 vs 105 rows): <= 60 threshold, battle spill, and both target-selection loops match; retail lowers memset to __aeabi_memset4 and loads DAT_00573c58 via a single ldm. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "util/Random.h"
#include <string.h>

namespace {
struct RandomPartyTargetMasks { u64 required, excluded; };
}
extern "C" {
extern RandomPartyTargetMasks DAT_00573c58;
void FUN_004fdb18(s32 first, s32 second, BattleRosterRecordA *target, u32 effect, s32 mode);

/* Independently select eligible party members, guaranteeing at least one target if any exist. */
void FUN_00411cec(void)
{
    BtlMainStateA *battle = btlGetMainState();
    s32 candidates[4];
    memset(candidates, -1, sizeof(candidates));
    s32 count = 0;
    for (s32 index = 0; index < 4; ++index) {
        BtlCombatantEntryA *entry = &battle->entries[index];
        if ((entry->flags & DAT_00573c58.required) != 0 &&
            (entry->flags & DAT_00573c58.excluded) == 0 && entry->data.hp != 0 &&
            (entry->data.statusFlags == 0 || entry->data.statusFlags == 4)) {
            candidates[count++] = index;
        }
    }
    if (count != 0) {
        s32 selected = 0;
        for (s32 index = 0; index < count; ++index) {
            s32 candidate = candidates[index];
            if (candidate >= 0) {
                BtlCombatantEntryA *entry = &battle->entries[candidate];
                if (lcgRandomRange(99) <= 60) {
                    FUN_004fdb18(0, 0, &battle->roster[entry->ids[0]], 0x10, 0);
                    selected++;
                }
            }
        }
        if (selected == 0) {
            s32 choice = lcgRandomRange((u16)(count - 1));
            BtlCombatantEntryA *entry = &battle->entries[candidates[choice]];
            FUN_004fdb18(0, 0, &battle->roster[entry->ids[0]], 0x10, 0);
        }
    }
}
}
