#include "shard/IdRecordTable.h"

extern "C" {

/* Returns the owner's record with the given id, or NULL. */
IdRecord *FUN_00141548(IdRecordOwner *owner, u16 id)
{
    s32 i;

    for (i = 0; i < owner->recordCount; i++) {
        if (id == owner->records[i].id) {
            return &owner->records[i];
        }
    }
    return NULL;
}

} /* extern "C" */
