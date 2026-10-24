/* NON_MATCHING: retail addresses the key words and the text of the entry table from one base (text = base + 28); the built code needs the table defined in the same unit to do that */
#include "common.h"

struct TextEntry {
    s32 category;     // 0x00
    s32 id;           // 0x04
    u8 unk08[0x14];   // 0x08
    char text[0x40];  // 0x1C
};

extern "C" {

extern TextEntry g_textEntries[0x3E7]; /* 0x448e18 */
extern char *g_categoryTexts[];        /* 0x44cd58 */

/* Finds the text of entry (category, id); category 0x18 is indexed directly by id. NULL when absent. */
char *FUN_001b43f0(s32 category, s32 id)
{
    if (category == 0x18) {
        return g_categoryTexts[id];
    }
    for (s32 i = 0; i < 0x3E7; i++) {
        TextEntry *entry = &g_textEntries[i];

        if (entry->category == -1) {
            return NULL;
        }
        if (entry->category == category && entry->id == id) {
            return entry->text;
        }
    }
    return NULL;
}

} /* extern "C" */
