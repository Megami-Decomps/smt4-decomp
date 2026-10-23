/* NON_MATCHING: saved registers, local buffer placement, flag preloads and position conversion order differ. */
#include "map/mapEpl.h"
#include "AsdSDK/AsdDebug.h"
struct MapEplPlacementRecord {
    s8 map, area;
    s16 x, y, z;
    char name[16];
    s16 requiredFlag, excludedFlag;
};
typedef char MapEplPlacementLayout[(sizeof(MapEplPlacementRecord) == 0x1C && offsetof(MapEplPlacementRecord, requiredFlag) == 0x18) ? 1 : -1];
extern "C" {
extern MapEpl *g_mapEpl;
extern const char DAT_005319ec[];
void *asdMemoryAllocTracked(s32 heap, s32 alignment, s32 flags, u32 size, s32 clear);
s32 FUN_0038589c(void);
const MapEplPlacementRecord *aocDataTable2dGetEntryKind3(u32 index);
s32 gameFlagIsSet(s32 flag);
s32 textFormatBuffer(char *buffer, const char *format, ...);
void *FUN_001642e4(const char *path, u32 *size, s32 heap, u32 flags);
void *FUN_001abbc4(void *data);
void FUN_001b4eb8(void *object, const f32 *position);
}
static inline s32 loadMapEffect(const char *path)
{
    MapEpl *pool = g_mapEpl;
    for (s32 slot = 0; slot < MAP_EPL_ENTRIES; ++slot) {
        MapEplEntry *entry = &pool->entries[slot];
        if (!entry->object) {
            u32 size;
            entry->data = FUN_001642e4(path, &size, 1, 0x80);
            entry->object = FUN_001abbc4(entry->data);
            return slot;
        }
    }
    return -1;
}
extern "C" void FUN_002b77bc(s32 map, s32 area)
{
    char path[36];
    if (!g_mapEpl) {
        asdDebugTrace(DAT_005319ec, 100);
        MapEpl *pool = static_cast<MapEpl *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(MapEpl), 1));
        g_mapEpl = pool;
        pool->state[0] = 0;
        pool->state[1] = 0;
        for (s32 i = 0; i < MAP_EPL_ENTRIES; ++i) {
            MapEplEntry *entry = &pool->entries[i];
            entry->data = 0;
            entry->object = 0;
            entry->position[0] = 0.0f;
            entry->position[1] = 0.0f;
            entry->position[2] = 0.0f;
            entry->position[3] = 0.0f;
        }
    }
    for (s32 i = 0; i < FUN_0038589c(); ++i) {
        const MapEplPlacementRecord *record = aocDataTable2dGetEntryKind3(i);
        if (record->map != -1 &&
            (!record->requiredFlag || gameFlagIsSet(record->requiredFlag)) &&
            (!record->excludedFlag || !gameFlagIsSet(record->excludedFlag)) &&
            record->map == map && record->area == area) {
            textFormatBuffer(path, "effect_editor/%s.EPL", record->name);
            s32 slot = loadMapEffect(path);
            MapEplEntry *entry = &g_mapEpl->entries[slot];
            f32 x = record->x, y = record->y, z = record->z;
            if (entry->object) {
                entry->position[0] = x;
                entry->position[3] = 0.0f;
                entry->position[1] = y;
                entry->position[2] = z;
                FUN_001b4eb8(entry->object, entry->position);
            }
        }
    }
}
