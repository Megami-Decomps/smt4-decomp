#include "gamedata/GuestParamTable.h"

extern "C" {

/* Returns the 0x06 value of guest `id` (GuestParamData.tbb), or 0 when there is none. */
u16 dataTable0aSub0GetValueById(u32 id)
{
    void *table = dataTableGet(10, 0);
    GuestParamRecord *entries = guestParamRecords(table);
    u32 count = dataTableGetCount(table);
    s32 i;

    for (i = 0; i < count; i++) {
        if (entries[i].id == id) {
            return entries[i].unk06;
        }
    }
    return 0;
}

} /* extern "C" */
