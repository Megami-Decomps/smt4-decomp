#include "common.h"
#include "addon/AocSystem_Smt4.h"

extern "C" {

typedef struct AocEntry {
    /* 0x00 */ u8 type;
    /* 0x01 */ u8 id;
    /* 0x02 */ u8 unk02[8];
    /* 0x0A */ u16 requiredFlag;   /* 0 = none; otherwise this game flag must be set */
    /* 0x0C */ u16 forbiddenFlag;  /* 0 = none; otherwise this game flag must be clear */
    /* 0x0E */ u8 unk0E[0x92];
} AocEntry; /* 0xA0 */

extern s32 g_aocSystem;

extern AocEntry *dataTableFindRecordForSources(s32 system, u32 type, u32 id);
extern void *dataTableGet(s32 table, s32 section);
extern AocEntry *dataTableGetEntries(void *section);
extern s32 dataTableGetCount(void *section);
extern s32 gameFlagIsSet(u32 flag);

/* Finds the content entry for (type, id): the system's own, else the first table entry whose flag
 * conditions hold; the table's first entry if none does. */
AocEntry *aocEntryFind(u32 type, u32 id)
{
    AocEntry *found = dataTableFindRecordForSources(g_aocSystem, type, id);
    void *section;
    AocEntry *entries;
    s32 count;
    s32 i;

    if (found != NULL) {
        return found;
    }
    section = dataTableGet(2, 0);
    entries = dataTableGetEntries(section);
    count = dataTableGetCount(section);
    for (i = 0; i < count; i++) {
        if (entries[i].type == type && entries[i].id == id
            && (entries[i].requiredFlag == 0 || gameFlagIsSet(entries[i].requiredFlag) != 0)
            && (entries[i].forbiddenFlag == 0 || gameFlagIsSet(entries[i].forbiddenFlag) == 0)) {
            return &entries[i];
        }
    }
    return entries;
}

} /* extern "C" */
