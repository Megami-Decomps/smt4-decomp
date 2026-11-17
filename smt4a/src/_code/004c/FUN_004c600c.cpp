#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlGlobals.h"
#include "battle/BattleSkillResponseMasks.h"

extern "C" {
s32 FUN_004c600c(s32 selection)
{
    // The value lies in the shared entry's byte-aligned union, so keep this local.
    struct CandidateValueView { u8 unk000[0x120]; s32 value; };
    typedef char CandidateValueOffsetCheck[offsetof(CandidateValueView, value) == 0x120 ? 1 : -1];
    s32 first;
    s32 count;
    if ((u32)selection - 4 < 50) {
        first = 0;
        count = 4;
    } else {
        first = 4;
        count = 50;
    }
    BtlMainStateA *state = btlGetMainState();
    for (s32 index = first; first + count > index; ++index) {
        BtlCombatantEntryA *entry = &state->entries[index];
        if ((g_btlSkillResponseMasks.present & entry->flags) != 0 && (entry->flags & g_btlSkillResponseMasks.outOfFight) == 0) {
            s16 candidateSelection = entry->selectionIndex;
            BtlCombatantEntryA *candidate = btlMainFindEntryByListedId(btlGetMainState(), candidateSelection);
            if (candidate != NULL && ((CandidateValueView *)candidate)->value > 0) {
                return entry->selectionIndex;
            }
        }
    }
    return -1;
}
}
