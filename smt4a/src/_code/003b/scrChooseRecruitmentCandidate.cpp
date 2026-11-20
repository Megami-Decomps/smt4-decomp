#include "code/Code002a_Smt4a.h"
#include "util/Random.h"
#include "script/ScriptArgs.h"
#include "battle/BattleEventStatesA.h"
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/GameDataAccess.h"
#include "battle/BtlGlobals.h"
#include "battle/BattleMessageMasks.h"

extern "C" {
extern BattleMessageFlagMasks g_btlMessageFlagMasks;

enum { RECRUITMENT_ENTRY_COUNT = 109, RECRUITMENT_CANDIDATE_FLAG = 0x40 };

/* Report a random eligible recruitment target, or -1 if neither search succeeds. */
u32 scrChooseRecruitmentCandidate(void)
{
    s16 group = btlGetMainState()->motionGroup.group;
    BtlCombatantEntryA *actor = btlMainFindEntryByListedId(btlGetMainState(), group);
    BtlCombatantEntryA *candidates[RECRUITMENT_ENTRY_COUNT];
    u32 fallback = 0;
    do {
        sysMemClear(candidates, sizeof(candidates));
        u8 count = 0;
        if (fallback == 1 && randRange(99) < 90) {
            scrSetResult(-1);
        } else {
            for (s32 slot = 0; slot < RECRUITMENT_ENTRY_COUNT; ++slot) {
                BtlCombatantEntryA *entry = &btlGetMainState()->entries[slot];
                u64 flags = entry->flags;
                if ((flags & g_btlMessageFlagMasks.required) && !(flags & g_btlMessageFlagMasks.excluded) &&
                        (flags & g_btlMessageFlagMasks.recruitmentEligible) &&
                        entry->selectionIndex != actor->selectionIndex &&
                        entry->data.unk116 <= actor->data.unk116) {
                    if (!gameStockContainsEntry(entry->data.id) && entry->data.candidate &&
                            (entry->data.candidate->flags & RECRUITMENT_CANDIDATE_FLAG) &&
                            actor->data.id != entry->data.id) {
                        if (fallback == 0) {
                            if (compendiumEntryIsRegistered(actor->data.id))
                                continue;
                        } else if (!compendiumEntryIsRegistered(actor->data.id)) {
                            continue;
                        }
                        candidates[count++] = entry;
                    }
                }
            }
            if (count == 0) {
                if (fallback)
                    break;
                fallback = 1;
                continue;
            }
            scrSetResult(candidates[randRange((u16)(count - 1))]->ids[0]);
        }
        return 1;
    } while (true);
    scrSetResult(-1);
    return 1;
}
} /* extern "C" */
