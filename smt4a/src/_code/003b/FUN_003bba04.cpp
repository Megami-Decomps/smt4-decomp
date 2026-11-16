#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "script/ScriptArgs.h"

// These word fields fall inside an unaligned padding union in the shared combatant layout.
struct ResourceValueView {
    u8 unk000[0xac];
    s32 primary; // 0xac
    u32 unkB0;
    s32 fallback; // 0xb4
};
extern "C" {

// Report whether an eligible combatant has a positive primary or fallback resource.
u32 FUN_003bba04()
{
    for (s32 i = 0; i < 109; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((g_btlCandidateMasks.unavailable & entry->flags) &&
            (entry->flags & g_btlCandidateMasks.required) && !(entry->flags & g_btlCandidateMasks.excluded)) {
            ResourceValueView *values = (ResourceValueView *)entry;
            if (values->primary > 0 || values->fallback > 0) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}
}
