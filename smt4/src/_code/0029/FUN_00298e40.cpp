/* NON_MATCHING: requirement base addressing, handled-result lifetime and clamped remaining stores differ. */
#include "quest_center/QuestRequirement.h"
extern "C" {
QuestRequirementDefinition *dataTable1bOr1cGetRecord(s32 quest);
s32 unlockFlagTest(u16 id);
s32 FUN_0028fb40(u16 id);
s32 partyFindActiveSlotById(u16 id);
s32 aocEntryGetKind(u16 id);
QuestRequirementSavedProgress *FUN_00348b7c(s32 quest);

// Resolve an item, party-member or unlock requirement into current and remaining counts.
u32 FUN_00298e40(s32 quest, s32 index, QuestRequirementProgress *progress)
{
    QuestRequirementDefinition *definition = dataTable1bOr1cGetRecord(quest);
    if (definition == NULL)
        return 0;
    QuestRequirement *requirement = &definition->requirements[index];
    switch (requirement->kind) {
    case 1:
        progress->current = FUN_0028fb40(requirement->id);
        progress->isItem = 1;
        progress->id = requirement->id;
        progress->remaining = requirement->count - progress->current;
        break;
    case 2:
        progress->isItem = 0;
        progress->id = requirement->id;
        if (definition->kind != 1) {
            if (partyFindActiveSlotById(requirement->id) >= 0) {
                progress->current = 1;
                progress->remaining = 0;
            } else {
                progress->remaining = 1;
                progress->current = 0;
            }
            return 1;
        }
        progress->current = FUN_00348b7c(quest)->counts[index];
        progress->remaining = requirement->count - progress->current;
        break;
    case 7:
        if (aocEntryGetKind(requirement->id) == 11 && unlockFlagTest(requirement->id))
            progress->current = 1;
        progress->isItem = 1;
        progress->id = requirement->id;
        progress->remaining = requirement->count - progress->current;
        break;
    default:
        return 0;
    }
    if (progress->remaining < 1)
        progress->remaining = 0;
    return 1;
}
}
