#include "map/MapIfGlobals.h"
#include "shard/Shard0036.h"

extern "C" {

extern void dataTable23MarkEntrySeen(u32 handle);

/* Fires dataTable23MarkEntrySeen for every active type-3 record of the table. */
void recTableFireType3(void)
{
    MapIfStateA *table = g_mapIf.state;
    s32 i;

    for (i = 0; i < 0x80; i++) {
        MapIfRecord *rec = &table->records[i];

        if (rec->active != 0 && rec->state == 3) {
            dataTable23MarkEntrySeen(rec->handle);
        }
    }
}

} /* extern "C" */
