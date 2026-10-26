/* NON_MATCHING: argument/count address sharing, saved frame, title cold-branch and switch tail layout differ. */
#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "code/Code0035.h"

struct DefinitionMessageArgument { u16 kind; u16 id; u32 count; };
struct DefinitionMessageRecord {
    u8 prefix[8];
    char title[0xF8];
    DefinitionMessageArgument arguments[4];
};
struct DefinitionMessageDescriptor {
    s16 id;
    char name[53];
    char suffix[1];
};
extern "C" {
DefinitionMessageRecord* FUN_001ad9b4(u16 id);
const char* FUN_0015f858(u16 id, s32 converted);
const char* FUN_00180118(u16 id);
const char* dataTable0cFindByKey(u16 id);
char* libc_strcpy(char* destination, const char* source);
s32 FUN_002ebda8(void);
DefinitionMessageDescriptor* dataTableGetEntry37(s32 index);

void FUN_003dea6c(u16 definitionId, s32 includeArguments, s32 convertTitle)
{
    char text[128];
    char converted[128];
    const char* title = NULL;
    if (convertTitle) {
        DefinitionMessageRecord* definition = FUN_001ad9b4(definitionId);
        if (definition) {
            title = definition->title;
        }
        libc_strcpy(text, title);
        FUN_001654f0(text, converted);
        FUN_003180c4(40, converted);
    } else {
        DefinitionMessageRecord* definition = FUN_001ad9b4(definitionId);
        if (definition) {
            title = definition->title;
        }
        FUN_003180c4(40, title);
    }
    if (includeArguments) {
        DefinitionMessageRecord* definition = FUN_001ad9b4(definitionId);
        if (definition) {
            for (s32 index = 0; index < 4; ++index) {
                DefinitionMessageArgument* argument = &definition->arguments[index];
                switch (argument->kind) {
                case 1:
                case 7:
                    libc_strcpy(text, FUN_0015f858(argument->id, convertTitle));
                    FUN_003180c4(index, text);
                    FUN_00359974(index + 24, argument->count, -1, 0);
                    break;
                case 2:
                    libc_strcpy(text, FUN_00180118(argument->id));
                    FUN_003180c4(index + 8, text);
                    FUN_00359974(index + 24, argument->count, -1, 0);
                    break;
                case 5:
                    FUN_003180c4(index + 41, dataTable0cFindByKey(argument->id));
                    break;
                case 6:
                    FUN_00359974(index + 24, argument->count, -1, 0);
                    break;
                case 8: {
                    s32 count = FUN_002ebda8();
                    for (s32 descriptorIndex = 0; descriptorIndex < count; ++descriptorIndex) {
                        DefinitionMessageDescriptor* descriptor = dataTableGetEntry37(descriptorIndex);
                        // The retail lookup compares the key before checking the returned pointer.
                        if (descriptor->id == static_cast<s16>(argument->id)) {
                            if (descriptor) {
                                FUN_003180c4(index + 41, descriptor->name);
                                FUN_00359974(index + 42, argument->count, -1, 0);
                                FUN_003180c4(index + 43, descriptor->suffix[0] == '0' ? "" : descriptor->suffix);
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
