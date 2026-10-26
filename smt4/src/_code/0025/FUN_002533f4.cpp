/* NON_MATCHING: return-slot/count spills and template lookup register allocation differ from retail. */
#include "addon/aocMain.h"
#include "gamedata/DataTable.h"
#include "gamedata/Table00.h"
#include "util/Random.h"
#include "addon/AocSystem.h"

struct EncounterTemplateChoice { u16 templateId; u16 weight; };
struct EncounterTemplateChoices { EncounterTemplateChoice entries[15]; };
struct EncounterTemplateUnits { u8 prefix[12]; u16 units[6]; u8 suffix[4]; };
struct Table02Sub2Entry;
extern "C" {
extern AocSystem* g_aocSystem;
u16* gameDataGetTableEntry(u32 category, u32 index);
void FUN_002c0a9c(u32 category, u32 index, u32 initialize);
Table02Sub2Entry* aocFindSpriteTemplateByKey(AocSystem*, u32);
Table00Record* dataTable00FindById(u32 id);

u16 FUN_002533f4(u32 category, u32 index, s32 filterArrangements)
{
    s32 choicesId = *gameDataGetTableEntry(category, index);
    if (!choicesId) {
        FUN_002c0a9c(category, index, 1);
        choicesId = *gameDataGetTableEntry(category, index);
    }
    void* table = dataTableGet(2, 1);
    EncounterTemplateChoices* choices = static_cast<EncounterTemplateChoices*>(dataTableGetEntries(table));
    if (choicesId >= 0 && static_cast<u32>(choicesId) < dataTableGetCount(table)) {
        EncounterTemplateChoices* addon = reinterpret_cast<EncounterTemplateChoices*>(aocFindQuestPayloadById(g_aocSystem, choicesId));
        if (addon) {
            choices = addon;
        } else {
            choices += choicesId;
        }
    }
    u32 totalWeight = 0;
    for (s32 choiceIndex = 0; choiceIndex < 15; ++choiceIndex) {
        EncounterTemplateChoice* choice = &choices->entries[choiceIndex];
        s32 templateId = choice->templateId;
        if (templateId) {
            bool accepted = true;
            if (filterArrangements) {
                void* unitTable = dataTableGet(2, 2);
                EncounterTemplateUnits* units = static_cast<EncounterTemplateUnits*>(dataTableGetEntries(unitTable));
                if (templateId >= 0 && static_cast<u32>(templateId) < dataTableGetCount(unitTable)) {
                    EncounterTemplateUnits* addon = reinterpret_cast<EncounterTemplateUnits*>(aocFindSpriteTemplateByKey(g_aocSystem, templateId));
                    units = addon ? addon : units + templateId;
                }
                for (s32 unitIndex = 0; unitIndex < 6; ++unitIndex) {
                    u16 id = units->units[unitIndex];
                    if (id) {
                        Table00Record* record = dataTable00FindById(id);
                        if (record && (record->arrangement.first || record->arrangement.second)) {
                            accepted = false;
                            break;
                        }
                    }
                }
            }
            if (accepted) {
                totalWeight += choice->weight;
            }
        }
    }
    s32 roll = randNextInRange(static_cast<u16>(totalWeight - 1));
    // Retail filters the total above, but walks every nonempty choice when spending the roll.
    for (s32 choiceIndex = 0; choiceIndex < 15; ++choiceIndex) {
        EncounterTemplateChoice* choice = &choices->entries[choiceIndex];
        if (choice->templateId && (roll -= choice->weight) < 0) {
            return choice->templateId;
        }
    }
    return 0;
}
}
