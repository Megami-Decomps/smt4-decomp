#include "gamedata/CampComTable.h"

// Inlined copy of FUN_00292844: the camp command row with the given id, or NULL.
static CampComRecord *campComFindEntry(u32 id)
{
    void *section = dataTableGet(0x15, 0);
    CampComRecord *entries = campComRecords(section);
    u32 count = dataTableGetCount(section);
    s32 i;

    for (i = 0; i < count; i++) {
        if (entries[i].id == id) {
            return &entries[i];
        }
    }
    return NULL;
}

/* The help text of camp command `id`, or NULL. */
extern "C" char *FUN_00241a64(u32 id)
{
    CampComRecord *entry = campComFindEntry(id);
    return entry != NULL ? entry->text : NULL;
}
