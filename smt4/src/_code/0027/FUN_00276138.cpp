/* NON_MATCHING: retail retains a second game-state base with add #0 after the global load; remaining body matches. */
#include "map/mapDepart.h"
#include "map/mapMain.h"
#include "shard/SaveWork.h"

// View of the saved map origin in SaveWork's opaque prefix.
struct SavedMapOrigin {
    u8 unk00[0x2e];
    s16 mapId; // 0x2e
    s16 areaId; // 0x30
    s16 x, y, z; // 0x32
    s16 heading; // 0x38
};
struct MapSnapshotSave : SaveWork {
    u8 unkBDC[0x200];
    u32 objectId; // 0xddc
};
typedef char MapSnapshotSaveOffsetCheck[offsetof(MapSnapshotSave, objectId) == 0xddc ? 1 : -1];


extern "C" {
extern MapMain *g_mapMain;
extern GameState g_gameState;
void FUN_00270f70(MapVector *position);

// Save the return map and pose, unless a one-shot suppression flag was set.
void FUN_00276138()
{
    MapMain *map = g_mapMain;
    MapSnapshotSave *save = static_cast<MapSnapshotSave *>(gameGetMapBlock());
    GameState *state = &g_gameState;
    if (g_gameState.unk284 != 0) {
        state->unk284 = 0;
    } else {
        const SavedMapOrigin *origin = reinterpret_cast<const SavedMapOrigin *>(save);
        FUN_00270f70(&state->position);
        state->unk2F8 = 1;
        state->savedMapId = origin->mapId;
        state->savedAreaId = origin->areaId;
        state->savedObjectId = save->objectId;
        state->savedPosition.x = origin->x;
        state->savedPosition.y = origin->y;
        state->savedPosition.z = origin->z;
        state->unk314 = origin->heading;
        state->unk318 = origin->heading;
        state->targetMapId = map->mapId;
        state->targetAreaId = map->areaId;
        state->targetPosition = state->position;
        state->unk330 = state->unk90;
        state->unk334 = state->unk90;
    }
}
}
