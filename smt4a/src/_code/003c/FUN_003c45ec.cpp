#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "script/ScriptArgs.h"

extern "C" {

// Report whether any eligible combatant with the requested id has a positive value.
u32 FUN_003c45ec(void)
{
    // Adding s32 members to the shared entry's union at 0x0a would shift its alignment.
    struct CandidateEntryView {
        u64 flags;
        u8 unk008[0xa4];
        s32 primary; // 0xac
        u32 unk0b0;
        s32 fallback; // 0xb4
        u8 unk0b8[0xae];
        u16 id; // 0x166
        u8 unk168[0x2a0];
    };
    u32 id = scrGetArg(0);
    for (s32 index = 0; index < 109; ++index) {
        CandidateEntryView *entry = (CandidateEntryView *)&btlGetMainState()->entries[index];
        if ((entry->flags & g_btlCandidateMasks.unavailable) != 0 &&
            (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0 && entry->id == id) {
            if (entry->primary > 0 || entry->fallback > 0) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}
}
