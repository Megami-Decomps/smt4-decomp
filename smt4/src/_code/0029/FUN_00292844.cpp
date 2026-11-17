#include "gamedata/CampComTable.h"
#include "code/Code0029_Smt4.h"

extern "C" {

/* Returns the camp command row (CampComTable.tbb) with the given id, or NULL. */
CampComRecord *FUN_00292844(u32 id)
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

} /* extern "C" */
