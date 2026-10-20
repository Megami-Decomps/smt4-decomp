#include "classes/Obj4727e8.h"

extern "C" {
void geometryDestroy(u32 id);
void asdMemFree(void *block);
}

/* Releases every entry by its id, then frees the block the table lives in. */
void Obj4727e8::releaseEntries()
{
    Obj4727e8Ref *r = &ref;
    Obj4727e8Table *table = r->table;
    Obj4727e8Counter *counter = r->counter;
    Obj4727e8Entry *entry = table->entries;
    u32 count = counter->count;
    u32 i;

    for (i = 0; i < count; i++) {
        geometryDestroy(entry->id);
        entry++;
    }
    asdMemFree(table->block);
}
