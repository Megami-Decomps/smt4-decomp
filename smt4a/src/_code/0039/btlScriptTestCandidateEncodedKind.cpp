/* Tests whether the requested candidate's indexed encoded value is of kind one. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
BtlMainStateA *btlGetMainState(void);
u32 scrGetArg(u32 index);
void scrSetResult(s32 result);

u32 btlScriptTestCandidateEncodedKind(void)
{
    u32 id = scrGetArg(0);
    s32 valueIndex = scrGetArg(1);
    for (s32 i = 0; i < 109; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((g_btlCandidateMasks.unavailable & entry->flags) != 0 &&
            (g_btlCandidateMasks.required & entry->flags) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0 &&
            entry->id == id && (entry->encodedStats.values[valueIndex] >> 10) == 1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
