/* NON_MATCHING: argument/count address sharing, saved frame, title cold-branch and switch tail layout differ. */
#include "common.h"
#include "gamedata/PlayLogTable.h"
#include "quest_center/QuestRecordA.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "code/Code0035.h"

extern "C" {
const char* dataFindKindRecordWithAocOverrides(u16 id, s32 converted);
const char* dataTable01GetRecordWithAocOverride(u16 id);
const char* dataTable0cFindByKey(u16 id);
char* libc_strcpy(char* destination, const char* source);
s32 FUN_002ebda8(void);

void scrMessageSetSpeakerTitle(u16 definitionId, s32 includeArguments, s32 convertTitle)
{
    char text[128];
    char converted[128];
    const char* title = NULL;
    if (!convertTitle) {
        QuestRecordA* definition = questDataGetRecord(definitionId);
        if (definition) {
            title = definition->title;
        }
        scrSetStringSlot(40, title);
    } else {
        QuestRecordA* definition = questDataGetRecord(definitionId);
        if (definition) {
            title = definition->title;
        }
        libc_strcpy(text, title);
        FUN_001654f0(text, converted);
        scrSetStringSlot(40, converted);
    }
    if (includeArguments) {
        QuestRecordA* definition = questDataGetRecord(definitionId);
        if (definition) {
            for (s32 index = 0; index < 4; ++index) {
                QuestRequirement *argument = &definition->requirements[index];
                switch (argument->kind) {
                case 1:
                case 7:
                    libc_strcpy(text, dataFindKindRecordWithAocOverrides(argument->id, convertTitle));
                    scrSetStringSlot(index, text);
                    entryTableResetAndInit(index + 24, argument->count, -1, 0);
                    break;
                case 2:
                    libc_strcpy(text, dataTable01GetRecordWithAocOverride(argument->id));
                    scrSetStringSlot(index + 8, text);
                    entryTableResetAndInit(index + 24, argument->count, -1, 0);
                    break;
                case 5:
                    scrSetStringSlot(index + 41, dataTable0cFindByKey(argument->id));
                    break;
                case 6:
                    entryTableResetAndInit(index + 24, argument->count, -1, 0);
                    break;
                case 8: {
                    s32 count = FUN_002ebda8();
                    for (s32 descriptorIndex = 0; descriptorIndex < count; ++descriptorIndex) {
                        PlayLogRecord *descriptor = dataTableGetEntry37(descriptorIndex);
                        // The retail lookup compares the key before checking the returned pointer.
                        if (descriptor->counter == static_cast<s16>(argument->id)) {
                            if (descriptor) {
                                scrSetStringSlot(index + 41, descriptor->name);
                                entryTableResetAndInit(index + 42, argument->count, -1, 0);
                                scrSetStringSlot(index + 43, descriptor->suffix[0] == '0' ? "" : descriptor->suffix);
                            }
                            break;
                        }
                    }
                    break;
                }
                }
            }
        }
    }
}
}
