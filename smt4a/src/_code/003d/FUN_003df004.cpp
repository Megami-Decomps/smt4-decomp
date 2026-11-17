/* NON_MATCHING: the supported-kind result is set at the top of each case and returned from one exit like retail; retail duplicates the remaining-count clamp (store, compare, store) into every case arm and keeps ip/fp in the push list. */
#include "quest_center/QuestRequirement.h"
#include "quest_center/QuestRecordA.h"
#include "gamedata/GameDataAccess_Smt4a.h"

struct QuestObjectiveCountsA {
    u8 unk00[4];
    u16 counts[1];
};
extern "C" {
s32 flagValueRead(u16 item);
void *gameFindRosterEntry(u32 quest);
s32 partyFindSlotById(u16 id);

/* Resolves an objective's current/remaining quantity and returns whether its kind is supported. */
s32 FUN_003df004(u32 quest, s32 index, QuestRequirementProgress *progress)
{
    s32 result = 0;
    progress->unk07 = 0;
    QuestRecordA *definition = dataTable1bOr1cGetRecord(quest);
    if (definition == NULL) {
        return result;
    }
    QuestRequirement *objective = &definition->requirements[index];
    switch ((u16)objective->kind) {
    case 1:
        result = 1;
        progress->current = flagValueRead(objective->id);
        progress->isItem = 1;
        progress->id = objective->id;
        progress->remaining = objective->count - progress->current;
        break;
    case 2:
        result = 1;
        progress->isItem = 0;
        progress->id = objective->id;
        if (definition->kind == 1) {
            QuestObjectiveCountsA *saved = (QuestObjectiveCountsA *)gameFindRosterEntry(quest);
            progress->current = saved->counts[index];
            progress->remaining = objective->count - progress->current;
        } else {
            if (partyFindSlotById(objective->id) >= 0) {
                progress->current = 1;
                progress->remaining = 0;
            } else {
                progress->remaining = 1;
                progress->current = 0;
            }
            return result;
        }
        break;
    case 7:
        result = 1;
        progress->isItem = 1;
        progress->id = objective->id;
        progress->remaining = objective->count - progress->current;
        break;
    case 8:
        result = 1;
        progress->id = objective->id;
        progress->current = gameCountersGetWord(objective->id & 0xFF);
        progress->remaining = objective->count - progress->current;
        progress->unk07 = 1;
        break;
    default:
        return result;
    }
    if (progress->remaining < 1) {
        progress->remaining = 0;
    }
    return result;
}
}
