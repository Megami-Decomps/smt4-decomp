#include "classes/Obj4727b8.h"

extern "C" {
void FUN_002570a8(u32 id);
void asdMemFree(void *block);
}

/* Releases every entry in the table by its id, then frees the table. */
void Obj4727b8::releaseEntries()
{
    Obj4727b8Ref *r = &ref;
    Obj4727b8Table *table = r->table;
    Obj4727b8Counter *counter = r->counter;
    Obj4727b8Entry *entry = table->entries;
    u32 count = counter->count;
    u32 i;

    for (i = 0; i < count; i++) {
        FUN_002570a8(entry->id);
        entry++;
    }
    asdMemFree(table);
}
