/* NON_MATCHING: rare-pass rejection shares the final failure block, and the ordinary-pass predicate is not outlined after success. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/GameDataAccess.h"
struct RecruitmentMasks {
    u8 prefix[8];
    u64 required;
    u8 unk10[0x10];
    u64 eligible;
    u64 excluded;
};
extern "C" {
extern RecruitmentMasks g_btlMessageFlagMasks;
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *state, s32 group);
u32 randRange(u32 maximum);
void sysMemClear(void *memory, u32 bytes);
void scrSetResult(s32 result);
u32 FUN_002a4b28(u32 id);

u32 FUN_003bcb64(void)
{
    s16 group = btlGetMainState()->motionGroup.group;
    BtlCombatantEntryA *actor = FUN_003f0e20(btlGetMainState(), group);
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
                    entry->indexView.selectionIndex != actor->indexView.selectionIndex &&
                    entry->thresholdView.unk27A <= actor->thresholdView.unk27A) {
                if (!gameStockContainsEntry(entry->id) && entry->candidate.record &&
                        (entry->candidate.record->flags & 0x40) && actor->id != entry->id) {
                    if (fallback ? FUN_002a4b28(actor->id) : !FUN_002a4b28(actor->id))
                        candidates[count++] = entry;
                }
            }
        }
        if (count) {
            scrSetResult(candidates[randRange((u16)(count - 1))]->unitIndex);
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
