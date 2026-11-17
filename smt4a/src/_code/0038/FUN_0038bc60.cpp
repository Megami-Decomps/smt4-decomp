/* NON_MATCHING: only the entry-address registers differ (retail adds the pointer offsets into r1 and the index multiply into r0; the build swaps them). */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "script/ScriptArgs.h"
extern "C" {

/* Test whether an eligible combatant has the requested ID and property value. */
u32 FUN_0038bc60(void)
{
    /* A u32 overlay in the shared union at +0xA would change its alignment. */
    struct PropertyView {
        u8 prefix[0x74];
        u32 values[12];
    };
    u32 unitId = scrGetArg(0);
    s32 kind = scrGetArg(1);
    s32 property = 0;
    if (kind == 0)
        property = 7;
    else if (kind == 1)
        property = 8;
    else if (kind == 2)
        property = 10;
    else if (kind == 3)
        property = 11;
    u32 value = scrGetArg(2);
    for (s32 index = 0; index < 109; ++index) {
        BtlMainStateA *state = btlGetMainState();
        BtlCombatantEntryA *entry = &state->entries[index];
        u64 flags = entry->flags;
        if ((flags & g_btlCandidateMasks.unavailable) != 0 &&
            (flags & g_btlCandidateMasks.required) != 0 &&
            (flags & g_btlCandidateMasks.excluded) == 0 &&
            entry->data.id == unitId &&
            reinterpret_cast<const PropertyView *>(entry)->values[property] == value) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
