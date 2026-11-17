#include "common.h"
#include "code/Code0019.h"
#include "gamedata/GuestParamTable.h"

extern "C" {

/* Returns the demon id of guest `key` (GuestParamData.tbb), or 0 when the key is absent. */
u16 dataTable10FindValue(u32 key)
{
    void *table = dataTableGet(10, 0);
    GuestParamRecord *entries = guestParamRecords(table);
    u32 count = dataTableGetCount(table);
    s32 i;

    for (i = 0; i < count; i++) {
        if (entries[i].id == key) {
            return entries[i].demonId;
        }
    }
    return 0;
}

} /* extern "C" */
