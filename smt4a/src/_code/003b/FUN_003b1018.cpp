/* NON_MATCHING: retail loads the two mask words separately and uses LDM for unit flags; built uses LDRD. */
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "battle/btlScript.h"
#include "battle/BtlMainAccess.h"
struct CandidateUnit {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u64 *flags;
};
extern "C" {
CandidateUnit *btlUnitGet(u32 id);
s32 partySlotMatchesSelected(u32 selected);
void scrSetResult(s32 result);

/* Tests the current unit's single-action mask and the selected candidate. */
u32 FUN_003b1018(void)
{
    CandidateUnit *unit = btlUnitGet(g_btlScriptUnit);
    if ((*unit->flags & g_btlCandidateMasks.singleAction) != 0 &&
        partySlotMatchesSelected(btlGetMainStateExt()->selected) != 0) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 1;
}
}
