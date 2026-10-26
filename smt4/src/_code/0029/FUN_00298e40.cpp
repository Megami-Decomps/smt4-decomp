/* NON_MATCHING: requirement base addressing, handled result and per-case clamp now match; only register numbering (r6/r7), the block order of the clamp tail and strge/strlt order differ. */
#include "quest_center/QuestRequirement.h"
extern "C" {
QuestRequirementDefinition *dataTable1bOr1cGetRecord(s32 quest);
s32 unlockFlagTest(u16 id);
s32 FUN_0028fb40(u16 id);
s32 partyFindActiveSlotById(u16 id);
s32 aocEntryGetKind(u16 id);
QuestRequirementSavedProgress *FUN_00348b7c(s32 quest);

// Stores the unmet count, never negative.
static __inline void setRemaining(QuestRequirementProgress *progress, s32 value)
{
    progress->remaining = value;
    if (progress->remaining <= 0)
        progress->remaining = 0;
}

// Resolve an item, party-member or unlock requirement into current and remaining counts.
u32 FUN_00298e40(s32 quest, s32 index, QuestRequirementProgress *progress)
{
    u32 handled = 0;
    QuestRequirementDefinition *definition = dataTable1bOr1cGetRecord(quest);
    if (definition == NULL)
        return 0;
    switch (definition->requirements[index].kind) {
    case 1:
        handled = 1;
        progress->current = FUN_0028fb40(definition->requirements[index].id);
        progress->isItem = 1;
        progress->id = definition->requirements[index].id;
        setRemaining(progress, definition->requirements[index].count - progress->current);
        break;
    case 2:
        handled = 1;
        progress->isItem = 0;
        progress->id = definition->requirements[index].id;
        if (definition->kind != 1) {
            if (partyFindActiveSlotById(definition->requirements[index].id) < 0) {
                progress->remaining = 1;
                progress->current = 0;
            } else {
                progress->current = 1;
                progress->remaining = 0;
            }
            return handled;
        }
        progress->current = FUN_00348b7c(quest)->counts[index];
        setRemaining(progress, definition->requirements[index].count - progress->current);
        break;
    case 7:
        handled = 1;
        if (aocEntryGetKind(definition->requirements[index].id) == 11 && unlockFlagTest(definition->requirements[index].id))
            progress->current = 1;
        progress->isItem = 1;
        progress->id = definition->requirements[index].id;
        setRemaining(progress, definition->requirements[index].count - progress->current);
        break;
    default:
        return handled;
    }
    return handled;
}
}
