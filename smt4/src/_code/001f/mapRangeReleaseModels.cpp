#include "map/MapRange.h"

extern "C" {

int asdMdlManagerMarkDestroy(u32 handle);

extern MapRangeWork *g_mapRangeWork;

void mapRangeReleaseModels(void)
{
    s32 i = 0;
    MapRangeEntry *entry;

    do {
        entry = &g_mapRangeWork->records.entries[i];
        if (entry->active != 0 && entry->valid != 0) {
            if (entry->enabled != 0 && entry->handle != 0) {
                asdMdlManagerMarkDestroy(entry->handle);
            }
        }
        i++;
    } while (i < 0x10);
    i = 0;
    do {
        if (g_mapRangeWork->slots[i].handle != 0) {
            asdMdlManagerMarkDestroy(g_mapRangeWork->slots[i].handle);
        }
        i++;
    } while (i < 2);
}

} /* extern "C" */
