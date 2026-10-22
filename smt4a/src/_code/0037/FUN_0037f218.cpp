#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

namespace {
struct DemonRecordFamily {
    /* 0x00 */ u8 unk00[9];
    /* 0x09 */ u8 family;
};
}

extern "C" {

void scrSetResult(s32 result);
BtlMainStateA *btlGetMainState(void);
DemonRecordFamily *FUN_00184310(u32 id);

/* Script command: whether any eligible battle entry is a demon of family 5. */
u32 FUN_0037f218(void)
{
    for (s32 i = 0; i < 109; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(entry->flags & g_btlCandidateMasks.excluded) &&
            FUN_00184310(entry->id)->family == 5) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
