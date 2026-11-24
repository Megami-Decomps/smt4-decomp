#include "common.h"
#include "gamedata/PlayLogTable.h"
#include "quest_center/QuestRecordA.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "code/Code0035.h"

extern "C" {
const char *dataFindKindRecordWithAocOverrides(u16 id, s32 converted);
const char *dataTable01GetRecordWithAocOverride(u16 id);
const char *dataTable0cFindByKey(u16 id);
char* libc_strcpy(char* destination, const char* source);
s32 FUN_002ebda8(void);

/* Returns a quest's title or NULL when missing (inlined form of questGetTitleOrDescription). */
static __inline const char *questGetTitle(u16 id)
{
    QuestRecordA *record = questDataGetRecord(id);
    if (record != NULL) {
        return record->title;
    }
    return NULL;
}

/* Populates message string slots with a quest's title and optionally its requirement arguments. */
void scrMessageSetSpeakerTitle(u16 definitionId, s32 includeArguments, s32 convertTitle)
{
    char text[128];
    char converted[128];
    QuestRecordA *definition;
    s32 index;
    s32 count;
    s32 descriptorIndex;
    PlayLogRecord *found;
    PlayLogRecord *descriptor;

    if (!convertTitle) {
        scrSetStringSlot(40, questGetTitle(definitionId));
    } else {
        libc_strcpy(text, questGetTitle(definitionId));
        FUN_001654f0(text, converted);
        scrSetStringSlot(40, converted);
    }
    if (includeArguments) {
        definition = questDataGetRecord(definitionId);
        if (definition != NULL) {
            for (index = 0; index < 4; ++index) {
                switch (definition->requirements[index].kind) {
                case 1:
                case 7:
                    libc_strcpy(text, dataFindKindRecordWithAocOverrides(definition->requirements[index].id, convertTitle));
                    scrSetStringSlot(index, text);
                    entryTableResetAndInit(index + 24, definition->requirements[index].count, -1, 0);
                    break;
                case 2:
                    libc_strcpy(text, dataTable01GetRecordWithAocOverride(definition->requirements[index].id));
                    scrSetStringSlot(index + 8, text);
                    entryTableResetAndInit(index + 24, definition->requirements[index].count, -1, 0);
                    break;
                case 5:
                    scrSetStringSlot(index + 41, dataTable0cFindByKey(definition->requirements[index].id));
                    break;
                case 6:
                    entryTableResetAndInit(index + 24, definition->requirements[index].count, -1, 0);
                    break;
                case 8:
                    count = FUN_002ebda8();
                    found = NULL;
                    for (descriptorIndex = 0; descriptorIndex < count; ++descriptorIndex) {
                        descriptor = dataTableGetEntry37(descriptorIndex);
                        if (descriptor->counter == (s16)definition->requirements[index].id) {
                            found = descriptor;
                            break;
                        }
                    }
                    if (found != NULL) {
                        scrSetStringSlot(index + 41, found->name);
                        entryTableResetAndInit(index + 42, definition->requirements[index].count, -1, 0);
                        if (found->suffix[0] == '0') {
                            scrSetStringSlot(index + 43, "");
                        } else {
                            scrSetStringSlot(index + 43, found->suffix);
                        }
                    }
                    break;
                }
            }
        }
    }
}
} /* extern "C" */
