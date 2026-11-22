/* NON_MATCHING: the spawn stores now address the scene base as retail does (same shape as smt4a lmapInitializeArea); remaining: retail copies the position vector to targetPosition/previousPosition with vldmia/vstmia, the build through core registers (ldm/stm), shifting the literal pool. */
#include "map/LmapMainGlobals.h"
#include "map/MapDepartTarget.h"
#include "map/SceneSpawn.h"
#include "gamedata/DataTableAccess_AocTable23.h"
#include "game/GameState.h"

extern "C" {
u32 table23FindRecordByKey(s32 map, u32 destination, u32 flags);
void mapDepartSetTarget(s32 group, s32 map, s32 target);
void mapCollisionRelease(void);
void mapCollisionLoad(s32 map, u32 destination, s32 group, s32 target);
void lmapUpdateMapBgm(void);
void lmapEntryPoolDestroyAll(LmapObj *object);
void objSetBaseAndValue(LmapObj *object, s32 base, u32 value);
void entryListCollectMatches(LmapObj *object);

/* Enters map transition state `next` (unkCC), restarting its timer and counter unless already in it. */
static __inline void lmapMainEnterTransition(LmapMainState *state, u32 next)
{
    if (state->state != next) {
        state->state = next;
        state->stateStep = 0;
        state->stateTime = 0;
    }
}

// Reset the map actor to a destination's spawn and enter its transition state.
void FUN_002d1b94(u32 destination, u32 flags)
{
    LmapMainState *state = g_lmapMainState;
    u32 index = table23FindRecordByKey(state->mapId, destination, flags);
    const SceneSpawnRecord *spawn = reinterpret_cast<const SceneSpawnRecord *>(dataTableGetRecord23(index));
    const MapDepartTargetRecord *target = reinterpret_cast<const MapDepartTargetRecord *>(spawn);
    mapDepartSetTarget(target->group, target->map, target->target);
    state->areaId = destination;
    g_gameState.areaId = destination;
    g_lmapScene->pose.position.x = static_cast<f32>(spawn->x);
    g_lmapScene->pose.position.y = static_cast<f32>(spawn->y);
    g_lmapScene->pose.position.z = static_cast<f32>(spawn->z);
    MapVector position = g_lmapScene->pose.position;
    g_lmapScene->pose.targetPosition = position;
    g_lmapScene->pose.heading = 180.0f;
    g_lmapScene->pose.targetHeading = 180.0f;
    g_lmapScene->pose.previousPosition = position;
    mapCollisionRelease();
    if (state->mapId == 101) {
        mapCollisionLoad(state->mapId, state->areaId, 101, 10);
    } else {
        mapCollisionLoad(state->mapId, state->areaId, 0, 0);
    }
    lmapUpdateMapBgm();
    lmapEntryPoolDestroyAll(&state->obj);
    objSetBaseAndValue(&state->obj, state->mapId - 100, state->areaId);
    entryListCollectMatches(&state->obj);
    lmapMainEnterTransition(g_lmapMainState, 3);
    mapDepartSetTarget(-1, -1, -1);
}
}
