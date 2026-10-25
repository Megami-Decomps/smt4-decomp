/* NON_MATCHING: candidate counter tests use a different literal-pool layout and conditional sequence. */
/* Tests whether the requested candidate has a positive value in either action counter. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "script/ScriptArgs.h"

extern "C" {

u32 FUN_003ccbfc(void)
{
    /* Adding words in the shared byte region starting at 0x00A would shift its alignment. */
    struct CombatantCounterView {
        u64 flags;
        u8 unk008[0xA8];
        s32 first;
        u8 unk0B4[4];
        s32 second;
        u8 unk0BC[0xAA];
        u16 id;
    };
    u32 id = scrGetArg(0);
    for (s32 i = 0; i < 109; ++i) {
        CombatantCounterView *entry = (CombatantCounterView *)&btlGetMainState()->entries[i];
        if ((g_btlCandidateMasks.unavailable & entry->flags) != 0 &&
            (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (g_btlCandidateMasks.excluded & entry->flags) == 0 && entry->id == id) {
            if (entry->first > 0 || entry->second > 0) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}
}
