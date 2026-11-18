#include "font/TextGlyphEncoding.h"
/* NON_MATCHING: title branch placement, reward switch layout, and register allocation differ from retail. */
#include "common.h"
#include "quest_center/QuestRecord.h"
#include "bible/bibleDevil.h"

extern "C" {
const char *dataTable0cLookupById(u32 id);
const char *dataFindKindRecordWithAocOverrides(u32 id, s32 alternate);
const char *dataTable01FindByIdWithAoc(u32 id);
char *libc_strcpy(char *destination, const char *source);
void textEncodeFontSlot(s32 index, const char *text);

// Bind a record's title/description and, optionally, its six reward slots to UI text fields.
void uiBindRecordRewardText(u32 id, s32 showRewards, s32 description)
{
    char text[128];
    char formatted[128];
    const char *title = NULL;
    if (description) {
        QuestRecord *record = questDataGetRecord(id);
        if (record != NULL) {
            title = record->description;
        }
        libc_strcpy(text, title);
        textConvertToGlyphPairsInto(reinterpret_cast<const u8 *>(text), reinterpret_cast<s8 *>(formatted));
        textEncodeFontSlot(0x28, formatted);
    } else {
        QuestRecord *record = questDataGetRecord(id);
        if (record != NULL) {
            title = record->title;
        }
        textEncodeFontSlot(0x28, title);
    }
    if (showRewards) {
        QuestRecord *record = questDataGetRecord(id);
        if (record != NULL) {
            for (s32 index = 0; index < 6; ++index) {
                switch (record->requirements[index].kind) {
                case 1:
                case 7:
                    libc_strcpy(text, dataFindKindRecordWithAocOverrides(record->requirements[index].id, description));
                    textEncodeFontSlot(index, text);
                    FUN_0029ede8(index + 0x18, record->requirements[index].count, -1, 0);
                    break;
                case 2:
                    libc_strcpy(text, dataTable01FindByIdWithAoc(record->requirements[index].id));
                    textEncodeFontSlot(index + 8, text);
                    FUN_0029ede8(index + 0x18, record->requirements[index].count, -1, 0);
                    break;
                case 5:
                    textEncodeFontSlot(index + 0x29, dataTable0cLookupById(record->requirements[index].id));
                    break;
                case 6:
                    FUN_0029ede8(index + 0x18, record->requirements[index].count, -1, 0);
                    break;
                }
            }
        }
    }
}
}
