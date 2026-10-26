/* NON_MATCHING: title branch placement, reward switch layout, and register allocation differ from retail. */
#include "common.h"
#include "bible/bibleDevil.h"

struct RewardSlot {
    u16 type;
    u16 id;
    u32 count;
};
struct RewardRecord {
    u8 unk00[8];
    char name[0x30];       /* 0x008 */
    char description[0x134]; /* 0x038 */
    RewardSlot rewards[6]; /* 0x16c */
};

extern "C" {
RewardRecord *dataTable1bOr1cGetRecord(u32 id);
const char *dataTable0cLookupById(u32 id);
const char *FUN_002be650(u32 id, s32 alternate);
const char *FUN_002bd06c(u32 id);
char *libc_strcpy(char *destination, const char *source);
void FUN_002bd158(const char *source, char *destination);
void textEncodeFontSlot(s32 index, const char *text);

// Bind a record's title/description and, optionally, its six reward slots to UI text fields.
void uiBindRecordRewardText(u32 id, s32 showRewards, s32 description)
{
    char text[128];
    char formatted[128];
    const char *title = NULL;
    if (description) {
        RewardRecord *record = dataTable1bOr1cGetRecord(id);
        if (record != NULL) {
            title = record->description;
        }
        libc_strcpy(text, title);
        FUN_002bd158(text, formatted);
        textEncodeFontSlot(0x28, formatted);
    } else {
        RewardRecord *record = dataTable1bOr1cGetRecord(id);
        if (record != NULL) {
            title = record->name;
        }
        textEncodeFontSlot(0x28, title);
    }
    if (showRewards) {
        RewardRecord *record = dataTable1bOr1cGetRecord(id);
        if (record != NULL) {
            for (s32 index = 0; index < 6; ++index) {
                switch (record->rewards[index].type) {
                case 1:
                case 7:
                    libc_strcpy(text, FUN_002be650(record->rewards[index].id, description));
                    textEncodeFontSlot(index, text);
                    FUN_0029ede8(index + 0x18, record->rewards[index].count, -1, 0);
                    break;
                case 2:
                    libc_strcpy(text, FUN_002bd06c(record->rewards[index].id));
                    textEncodeFontSlot(index + 8, text);
                    FUN_0029ede8(index + 0x18, record->rewards[index].count, -1, 0);
                    break;
                case 5:
                    textEncodeFontSlot(index + 0x29, dataTable0cLookupById(record->rewards[index].id));
                    break;
                case 6:
                    FUN_0029ede8(index + 0x18, record->rewards[index].count, -1, 0);
                    break;
                }
            }
        }
    }
}
}
