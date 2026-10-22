#include "map/mapIf.h"
#include "common.h"

extern "C" {

int mapFlagSet(u32 value);

extern MapIfGlobals g_mapIf;

void mapIfApplyRecordFlags(void)
{
    int i = 0;
    MapIfState *table = g_mapIf.state;
    MapIfRecord *slot;

    do {
        slot = &table->records[i];
        if ((slot->active != 0) && (slot->state == 3)) {
            mapFlagSet(slot->handle);
        }
        i = i + 1;
    } while (i < 0x80);
}

} /* extern "C" */
