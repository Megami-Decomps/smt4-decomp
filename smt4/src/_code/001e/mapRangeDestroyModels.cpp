#include "map/MapRange.h"

extern "C" {
void asdMdlManagerDestroy(u32 handle);
extern MapRangeWork *g_mapRangeWork;

/* Destroys cloned range models followed by their shared base models. */
void mapRangeDestroyModels(void)
{
    for (s32 i = 0; i < 16; ++i) {
        MapRangeEntry *instance = &g_mapRangeWork->records.entries[i];
        if (instance->active && instance->valid && instance->handle) {
            asdMdlManagerDestroy(instance->handle);
            instance->handle = 0;
        }
    }
    for (s32 i = 0; i < 2; ++i) {
        if (g_mapRangeWork->slots[i].handle) {
            asdMdlManagerDestroy(g_mapRangeWork->slots[i].handle);
            g_mapRangeWork->slots[i].handle = 0;
        }
    }
}
}
