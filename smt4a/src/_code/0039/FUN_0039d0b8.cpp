#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {

typedef struct DevilKindData {
    /* 0x00 */ u8 unk00[9];
    /* 0x09 */ u8 kind;
} DevilKindData;

void scrSetResult(s32 result);
DevilKindData *FUN_00184310(u16 devilId);

// Report whether any eligible battle entry is a devil of kind 1.
u32 FUN_0039d0b8(void)
{
    for (s32 i = 0; i < 109; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(entry->flags & g_btlCandidateMasks.excluded) &&
            FUN_00184310(entry->id)->kind == 1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
