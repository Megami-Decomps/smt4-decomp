/* NON_MATCHING: 144 lines. Written like Apocalypse's FUN_0041817c: the accepted quests go through the inlined
 * per-quest update (counters shared at 0x87A, the open-requirement flag reset per quest). Remaining: the registers of
 * the flag block and selected id (retail r7/r8), the open-requirement compare (retail loads the counter before the
 * requirement count), and the selected path's saturation tail, which retail cross-jumps into the store path. */
#include "gamedata/MapSaveBlock.h"
#include "quest_center/QuestRuntime.h"
#include "quest_center/QuestRecord.h"
#include "quest_center/QuestRequirement.h"
#include "shard/W6_W6Match5_SecondarySort.h"
#include "gamedata/GameDataAccess_VariantA.h"

/* A quest slot of the flag block: the quest id and one progress counter per quest->requirements[index]. */
struct AcceptedQuest {
    /* 0x0 */ u16 id;
    /* 0x2 */ u16 counts[6];
};

/* unit-local: the quest tail of the flag block past the shared QuestRuntimeFlagBlock prefix. */
struct QuestProgressView {
    /* 0x000 */ QuestRuntimeFlagBlock base;
    /* 0x840 */ u16 selected;
    /* 0x842 */ AcceptedQuest accepted[4];
    /* 0x87A */ AcceptedQuest progress;   /* the counters every accepted quest advances */
};

extern "C" {
s32 table1bOr1cGetRecordValue(u32 quest);

/* Marks the quest's runtime state as changed. */
static __inline void questMarkChanged(u32 questId)
{
    reinterpret_cast<QuestRuntimeFlagBlock *>(gameGetFlagBlock())->quests[questId].stateFlags |= 2;
}

/* Adds `change` to the counter of the quest's requirement that collects `itemId`, reporting the item when the
 * requirement was still open (Apocalypse's FUN_0041817c inlines the same per-quest update). */
static __inline void questAddItemProgress(AcceptedQuest *counters, u16 questId, u16 itemId, s32 change)
{
    if (questId == 0)
        return;
    const QuestRecord *quest = questDataGetRecord(questId);
    if (quest->kind != 1)
        return;
    s32 incomplete = 0;
    MapSaveBlock *notification = gameGetMapBlock();
    for (s32 index = 0; index < 6; ++index) {
                if (static_cast<u16>(quest->requirements[index].kind) == 2 && quest->requirements[index].id == itemId) {
            u32 before = counters->counts[index];
            if (before < static_cast<u32>(quest->requirements[index].count))
                incomplete = 1;
            u32 after = before + change;
            if (static_cast<s32>(after) < 0xffff) {
                counters->counts[index] = static_cast<u16>(after);
                if (incomplete) {
                    if (static_cast<u16>(after) >= static_cast<u32>(quest->requirements[index].count))
                        notification->secondCompletedItem = itemId;
                    else
                        notification->secondProgressedItem = itemId;
                    questMarkChanged(questId);
                    return;
                }
            } else {
                counters->counts[index] = 0xffff;
                if (incomplete) {
                    questMarkChanged(questId);
                    return;
                }
            }
            break;
        }
    }
}

/* Adds `change` to the progress of the selected quest's requirement that collects `itemId`, or, with no quest
 * selected, to that of every accepted quest. */
void FUN_00348c10(u16 itemId, s32 change)
{
    QuestProgressView *flags = reinterpret_cast<QuestProgressView *>(gameGetFlagBlock());
    u16 selected = reinterpret_cast<QuestProgressView *>(gameGetFlagBlock())->selected;
    if (selected != 0) {
        if (table1bOr1cGetRecordValue(selected) != 1)
            return;
        const QuestRecord *quest = questDataGetRecord(selected);
        AcceptedQuest *counters = &flags->progress;
        s32 incomplete = 0;
        MapSaveBlock *notification = gameGetMapBlock();
        for (s32 index = 0; index < 6; ++index) {
            if (static_cast<u16>(quest->requirements[index].kind) == 2 && quest->requirements[index].id == itemId) {
                u32 before = counters->counts[index];
                if (before < static_cast<u32>(quest->requirements[index].count))
                    incomplete = 1;
                u32 after = before + change;
                if (static_cast<s32>(after) < 0xffff) {
                    counters->counts[index] = static_cast<u16>(after);
                    if (!incomplete)
                        return;
                    if (static_cast<u16>(after) >= static_cast<u32>(quest->requirements[index].count))
                        notification->secondCompletedItem = itemId;
                    else
                        notification->secondProgressedItem = itemId;
                } else {
                    counters->counts[index] = 0xffff;
                    if (!incomplete)
                        return;
                }
                questMarkChanged(selected);
                return;
            }
        }
        return;
    }
    for (s32 slot = 0; slot < 4; ++slot) {
        questAddItemProgress(&flags->progress, flags->accepted[slot].id, itemId, change);
    }
}
}
