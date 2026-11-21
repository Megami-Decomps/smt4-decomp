/* NON_MATCHING: written as Apocalypse's FUN_002b77bc (the free-slot load as an inline returning -1); retail keeps the -1
   in fp (one more saved register, a 44-byte frame) and builds the path address in r0 where this build uses ip. */
#include <stdio.h>
#include "map/mapEpl.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

struct MapEffectPlacementRecord {
    s8 map;
    s8 area;
    s16 x;
    s16 y;
    s16 z;
    char name[16];
};
typedef char MapEffectPlacementRecordSize[sizeof(MapEffectPlacementRecord) == 0x18 ? 1 : -1];

extern "C" {
extern MapEpl *g_mapEpl;
extern const char g_mapEplSourceFileName[];
void *asdLoadFileSync(const char *path, u32 *size, u32 heap, u32 alignment);
void *effPartCreateFromSource(void *data);
void skelNodePoseChain(void *object, const f32 *position);
s32 dataTable45GetSection3Count(void);
MapEffectPlacementRecord *aocDataTable2dGetEntryKind3(u32 index);

/* Loads an EPL file into the first free entry; returns the slot, or -1 when the table is full. */
static __inline s32 loadMapEffect(const char *path)
{
    for (s32 slot = 0; slot < MAP_EPL_ENTRIES; ++slot) {
        MapEplEntry *entry = &g_mapEpl->entries[slot];
        if (entry->object == NULL) {
            u32 fileSize;
            entry->data = asdLoadFileSync(path, &fileSize, 1, 0x80);
            entry->object = effPartCreateFromSource(entry->data);
            return slot;
        }
    }
    return -1;
}

void MapEpl_Init(s32 map, s32 area)
{
    char path[32];
    if (g_mapEpl == NULL) {
        asdDebugTrace(g_mapEplSourceFileName, 67);
        g_mapEpl = (MapEpl *)asdMemAlloc(0x100, 0x100, 0, sizeof(MapEpl), 1);
        MapEpl *work = g_mapEpl;
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
    for (s32 index = 0; index < dataTable45GetSection3Count(); ++index) {
        MapEffectPlacementRecord *placement = aocDataTable2dGetEntryKind3(index);
        if (placement->map != -1 && placement->map == map && placement->area == area) {
            sprintf(path, "effect_editor/%s.EPL", placement->name);
            s32 slot = loadMapEffect(path);
            MapEplEntry *entry = &g_mapEpl->entries[slot];
            /* The placement's position is converted before the entry is checked. */
            f32 x = placement->x;
            f32 y = placement->y;
            f32 z = placement->z;
            if (entry->object != NULL) {
                entry->position[3] = 0.0f;
                entry->position[0] = x;
                entry->position[1] = y;
                entry->position[2] = z;
                skelNodePoseChain(entry->object, entry->position);
            }
        }
    }
}
}
