#include "map/mapEpl.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern MapEpl *g_mapEpl;
extern const char DAT_0040442c[];
void *asdMemAlloc(s32 heap, s32 category, s32 flags, u32 bytes, s32 count);

/* Allocates the EPL table and clears its state and all entries. */
void MapEpl_InitState(void)
{
    asdDebugTrace(DAT_0040442c, 67);
    MapEpl *work = (MapEpl *)asdMemAlloc(0x100, 0x100, 0, sizeof(MapEpl), 1);

    g_mapEpl = work;
    work->state[0] = 0;
    work->state[1] = 0;
    for (s32 index = 0; index < MAP_EPL_ENTRIES; ++index) {
        MapEplEntry *entry = &work->entries[index];

        entry->data = NULL;
        entry->object = NULL;
        entry->position[0] = 0.0f;
        entry->position[1] = 0.0f;
        entry->position[2] = 0.0f;
        entry->position[3] = 0.0f;
    }
}

} /* extern "C" */
