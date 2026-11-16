#include "common.h"
#include "map/mapDepart.h"

struct TextEntry {
    s32 category;     // 0x00
    s32 id;           // 0x04
    u8 unk08[0x14];   // 0x08
    char text[0x40];  // 0x1C
};

extern "C" {

extern TextEntry g_textEntryTable[0x3E7];
extern char *g_textCategoryTexts[];

/* Finds the text of entry (category, id); category 0x18 is indexed directly by id. NULL when absent. */
char *FUN_001b43f0(s32 category, s32 id)
{
    if (category == 0x18) {
        return g_textCategoryTexts[id];
    }
    for (s32 i = 0; i < 0x3E7; i++) {
        if (g_textEntryTable[i].category == -1) {
            return NULL;
        }
        if (g_textEntryTable[i].category == category && g_textEntryTable[i].id == id) {
            return g_textEntryTable[i].text;
        }
    }
    return NULL;
}

} /* extern "C" */
