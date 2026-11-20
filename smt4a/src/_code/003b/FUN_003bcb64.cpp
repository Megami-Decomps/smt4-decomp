/* NON_MATCHING: rare-pass rejection shares the final failure block, and the ordinary-pass predicate is not outlined after success. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/GameDataAccess.h"
#include "battle/BtlGlobals.h"
struct RecruitmentMasks {
    u8 prefix[8];
    u64 required;
    u8 unk10[0x10];
    u64 eligible;
    u64 excluded;
};
extern "C" {
extern RecruitmentMasks g_btlMessageFlagMasks;
u32 randRange(u32 maximum);
void sysMemClear(void *memory, u32 bytes);
void scrSetResult(s32 result);
u32 compendiumEntryIsRegistered(u32 id);

u32 FUN_003bcb64(void)
{
    s16 group = btlGetMainState()->motionGroup.group;
    BtlCombatantEntryA *actor = btlMainFindEntryByListedId(btlGetMainState(), group);
    BtlCombatantEntryA *candidates[109];
    u32 fallback = 0;
    do {
        sysMemClear(candidates, sizeof(candidates));
        u8 count = 0;
        if (fallback == 1 && randRange(99) < 90) {
            scrSetResult(-1);
            return 1;
        }
        for (s32 slot = 0; slot < 109; ++slot) {
            BtlCombatantEntryA *entry = &btlGetMainState()->entries[slot];
            u64 flags = entry->flags;
            if ((flags & g_btlMessageFlagMasks.required) && !(flags & g_btlMessageFlagMasks.excluded) &&
                    (flags & g_btlMessageFlagMasks.eligible) &&
                    entry->selectionIndex != actor->selectionIndex &&
                    entry->data.unk116 <= actor->data.unk116) {
                if (!gameStockContainsEntry(entry->data.id) && entry->data.candidate &&
                        (entry->data.candidate->flags & 0x40) && actor->data.id != entry->data.id) {
                    if (fallback ? compendiumEntryIsRegistered(actor->data.id) : !compendiumEntryIsRegistered(actor->data.id))
                        candidates[count++] = entry;
                }
            }
        }
        if (count) {
            scrSetResult(candidates[randRange((u16)(count - 1))]->ids[0]);
            return 1;
        }
        if (fallback) {
            scrSetResult(-1);
            return 1;
        }
        fallback = 1;
    } while (true);
}
}
