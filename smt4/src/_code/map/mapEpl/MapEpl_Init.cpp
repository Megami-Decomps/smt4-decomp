/* NON_MATCHING: free-slot sentinel lifetime, path/file-size stack slots and position conversion/store grouping differ. */
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
extern const char DAT_0040442c[];
void textFormatBuffer(char *buffer, const char *format, ...);
void *asdLoadFileSync(const char *path, u32 *size, u32 heap, u32 alignment);
void *FUN_002a4e98(void *data);
void FUN_002a3ab0(void *object, const f32 *position);
s32 FUN_002fb3f4(void);
MapEffectPlacementRecord *aocDataTable2dGetEntryKind3(u32 index);

void MapEpl_Init(s32 map, s32 area)
{
    if (g_mapEpl == NULL) {
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
    for (s32 index = 0; index < FUN_002fb3f4(); ++index) {
        MapEffectPlacementRecord *placement = aocDataTable2dGetEntryKind3(index);
        if (placement->map != -1 && placement->map == map && placement->area == area) {
            char path[32];
            u32 fileSize;
            textFormatBuffer(path, "effect_editor/%s.EPL", placement->name);
            s32 slot = -1;
            for (s32 candidate = 0; candidate < MAP_EPL_ENTRIES; ++candidate) {
                MapEplEntry *entry = &g_mapEpl->entries[candidate];
                if (entry->object == NULL) {
                    entry->data = asdLoadFileSync(path, &fileSize, 1, 0x80);
                    entry->object = FUN_002a4e98(entry->data);
                    slot = candidate;
                    break;
                }
            }
            MapEplEntry *entry = &g_mapEpl->entries[slot];
            if (entry->object != NULL) {
                entry->position[3] = 0.0f;
                entry->position[0] = (f32)placement->x;
                entry->position[1] = (f32)placement->y;
                entry->position[2] = (f32)placement->z;
                FUN_002a3ab0(entry->object, entry->position);
            }
        }
    }
}
}
