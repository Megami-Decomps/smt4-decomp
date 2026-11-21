#include "quest_center/QuestRequirement.h"
#include "quest_center/QuestRecord.h"
extern "C" {
s32 unlockFlagTest(u16 id);
s32 flagValueRead(u16 id);
s32 partyFindActiveSlotById(u16 id);
s32 aocEntryGetKind(u16 id);
QuestRequirementSavedProgress *goalConditionsFindSlot(s32 quest);

/* Resolves an item, party-member or unlock requirement into current and remaining counts. */
u32 FUN_00298e40(s32 quest, s32 index, QuestRequirementProgress *progress)
{
    u32 handled = 0;
    QuestRecord *definition = questDataGetRecord(quest);
    if (definition == NULL)
        return 0;
    switch (definition->requirements[index].kind) {
    case 1:
        handled = 1;
        progress->current = flagValueRead(definition->requirements[index].id);
        progress->isItem = 1;
        progress->id = definition->requirements[index].id;
        progress->remaining = definition->requirements[index].count - progress->current;
        progress->remaining = progress->remaining > 0 ? progress->remaining : 0;
        break;
    case 2:
        handled = 1;
        progress->isItem = 0;
        progress->id = definition->requirements[index].id;
        if (definition->kind == 1) {
            progress->current = goalConditionsFindSlot(quest)->counts[index];
            progress->remaining = definition->requirements[index].count - progress->current;
            progress->remaining = progress->remaining > 0 ? progress->remaining : 0;
        } else {
            if (partyFindActiveSlotById(definition->requirements[index].id) < 0) {
                progress->remaining = 1;
                progress->current = 0;
            } else {
                progress->current = 1;
                progress->remaining = 0;
            }
        }
        break;
    case 7:
        handled = 1;
        if (aocEntryGetKind(definition->requirements[index].id) == 11 && unlockFlagTest(definition->requirements[index].id))
            progress->current = 1;
        progress->isItem = 1;
        progress->id = definition->requirements[index].id;
        progress->remaining = definition->requirements[index].count - progress->current;
        progress->remaining = progress->remaining > 0 ? progress->remaining : 0;
        break;
    default:
        break;
    }
    return handled;
}
}
