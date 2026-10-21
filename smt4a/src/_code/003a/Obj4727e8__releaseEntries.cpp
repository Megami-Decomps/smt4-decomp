#include "classes/Obj4727e8.h"

struct GeometryEntryOwner {
    /* 0x00 */ void *vtable;
    /* 0x04 */ u8 unk04[0x2c];
    /* 0x30 */ Obj4727e8Ref ref;
};

extern "C" {
void geometryDestroy(u32 id);
void asdMemFree(void *block);

/* Releases every geometry entry, then frees the table's allocation. */
void _ZN9Obj4727e814releaseEntriesEv(GeometryEntryOwner *owner)
{
    Obj4727e8Ref *ref = &owner->ref;
    Obj4727e8Table *table = ref->table;
    Obj4727e8Counter *counter = ref->counter;
    Obj4727e8Entry *entry = table->entries;
    u32 count = counter->count;

    for (u32 i = 0; i < count; i++) {
        geometryDestroy(entry->id);
        entry++;
    }
    asdMemFree(table->block);
}

} /* extern "C" */
