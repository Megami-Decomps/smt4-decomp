/* NON_MATCHING: combatant-array base and mask operands use different registers. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
BtlMainStateA *btlGetMainState(void);
s32 scrGetArg(u32);
void scrSetResult(s32);
}

/* Report whether an eligible combatant has the selected value below a threshold. */
extern "C" u32 FUN_003bb910(void)
{
    /* Word fields cannot be added to the combatant's halfword-aligned opaque union. */
    struct CombatantComparisonValues {
        u8 prefix[0x74];
        s32 values[12];
    };
    typedef char ValuesOffsetCheck[offsetof(CombatantComparisonValues, values) == 0x74 ? 1 : -1];
    s32 selector = scrGetArg(0);
    s32 valueIndex = 0;
    if (selector == 0) {
        valueIndex = 7;
    } else if (selector == 1) {
        valueIndex = 8;
    } else if (selector == 2) {
        valueIndex = 10;
    } else if (selector == 3) {
        valueIndex = 11;
    }
    s32 threshold = scrGetArg(1);
    for (s32 i = 0; i < 109; ++i) {
        const BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        const CombatantComparisonValues *values = (const CombatantComparisonValues *)entry;
        if ((entry->flags & g_btlCandidateMasks.unavailable) != 0 &&
            (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0 &&
            values->values[valueIndex] < threshold) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
