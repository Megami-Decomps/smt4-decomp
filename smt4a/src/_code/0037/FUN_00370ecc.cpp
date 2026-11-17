#include "gamedata/GuestParamTable.h"
#include "code/Code0037.h"

extern "C" {

/* Returns guest `id`'s row of GuestParamData.tbb, or NULL. */
GuestParamRecord *FUN_00370ecc(u16 id)
{
    void *resource = dataTableGet(10, 0);
    GuestParamRecord *entries = guestParamRecords(resource);
    u32 count = dataTableGetCount(resource);
    s32 i;

    for (i = 0; i < count; i++) {
        if (entries[i].id == id) {
            return &entries[i];
        }
    }
    return NULL;
}

} /* extern "C" */
