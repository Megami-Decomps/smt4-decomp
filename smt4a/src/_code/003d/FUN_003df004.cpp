/* NON_MATCHING: the supported-kind result is set at the top of each case and returned from one exit like retail; retail duplicates the remaining-count clamp (store, compare, store) into every case arm and keeps ip/fp in the push list. */
#include "quest_center/QuestRequirement.h"
#include "gamedata/GameDataAccess_Smt4a.h"

/* Apocalypse objectives begin at 0x100 rather than the shared IV definition's 0x16C. */
struct QuestObjectiveDefinitionA {
    u8 unk000[6];
    u8 kind;
    u8 unk007[0xF9];
    QuestRequirement objectives[1];
};
struct QuestObjectiveCountsA {
    u8 unk00[4];
    u16 counts[1];
};
extern "C" {
QuestObjectiveDefinitionA *FUN_001ad9b4(u32 quest);
s32 FUN_001ba3d4(u16 item);
void *gameFindRosterEntry(u32 quest);
s32 partyFindSlotById(u16 id);

/* Resolves an objective's current/remaining quantity and returns whether its kind is supported. */
s32 FUN_003df004(u32 quest, s32 index, QuestRequirementProgress *progress)
{
    s32 result = 0;
    progress->unk07 = 0;
    QuestObjectiveDefinitionA *definition = FUN_001ad9b4(quest);
    if (definition == NULL) {
        return result;
    }
    QuestRequirement *objective = &definition->objectives[index];
    switch ((u16)objective->kind) {
    case 1:
        result = 1;
        progress->current = FUN_001ba3d4(objective->id);
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
