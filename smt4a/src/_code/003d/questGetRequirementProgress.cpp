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
s32 questGetRequirementProgress(u32 quest, s32 index, QuestRequirementProgress *progress)
{
    s32 result = 0;
    progress->unk07 = 0;
    QuestRecordA *definition = questDataGetRecord(quest);
    if (definition == NULL) {
        return 0;
    }
    switch ((u16)definition->requirements[index].kind) {
    case 1:
        result = 1;
        progress->current = flagValueRead(definition->requirements[index].id);
        progress->isItem = 1;
        progress->id = definition->requirements[index].id;
        progress->remaining = definition->requirements[index].count - progress->current;
        progress->remaining = progress->remaining > 0 ? progress->remaining : 0;
        break;
    case 2:
        result = 1;
        progress->isItem = 0;
        progress->id = definition->requirements[index].id;
        if (definition->kind == 1) {
            QuestObjectiveCountsA *saved = (QuestObjectiveCountsA *)gameFindRosterEntry(quest);
            progress->current = saved->counts[index];
            progress->remaining = definition->requirements[index].count - progress->current;
            progress->remaining = progress->remaining > 0 ? progress->remaining : 0;
        } else {
            if (partyFindSlotById(definition->requirements[index].id) < 0) {
                progress->remaining = 1;
                progress->current = 0;
            } else {
                progress->current = 1;
                progress->remaining = 0;
            }
        }
        break;
    case 7:
        result = 1;
        progress->isItem = 1;
        progress->id = definition->requirements[index].id;
        progress->remaining = definition->requirements[index].count - progress->current;
        progress->remaining = progress->remaining > 0 ? progress->remaining : 0;
        break;
    case 8:
        result = 1;
        progress->id = definition->requirements[index].id;
        progress->current = gameCountersGetWord(progress->id & 0xFF);
        progress->remaining = definition->requirements[index].count - progress->current;
        progress->unk07 = 1;
        progress->remaining = progress->remaining > 0 ? progress->remaining : 0;
        break;
    default:
        break;
    }
    return result;
}
}
