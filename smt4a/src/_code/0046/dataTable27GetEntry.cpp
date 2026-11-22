#include "classes/Obj5333c0.h"
#include "gamedata/DataTable.h"

extern "C" {

/* Entry `index` of data table 0x27 (type 0), or NULL when out of range; the scene's table byte is not used. */
SceneTalkRecord *dataTable27GetEntry(const u8 *table27, u32 index)
{
    void *table = dataTableGet(0x27, 0);
    SceneTalkRecord *entries = (SceneTalkRecord *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        return NULL;
    }
    return &entries[index];
}

} /* extern "C" */
