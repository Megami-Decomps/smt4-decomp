/* NON_MATCHING: the transition helper and the per-map call now match; remaining: retail addresses the spawn position stores from the scene base (r1+28..) and places g_lmapScene before the 180.0 literal, where the build uses the transform pointer. */
#include "map/lmapMain.h"
#include "map/MapDepartTarget.h"
#include "map/SceneSpawn.h"
#include "gamedata/DataTableAccess_AocTable23.h"

extern "C" {
extern LmapMainState *g_lmapMainState;
extern LmapScene *g_lmapScene;
extern GameState g_gameState;
u32 table23FindRecordByKey(s32 map, u32 destination, u32 flags);
void mapDepartSetTarget(s32 group, s32 map, s32 target);
void mapCollisionRelease(void);
void FUN_0027b2b4(s32 map, u32 destination, s32 group, s32 target);
void lmapUpdateMapBgm(void);
void FUN_00264444(LmapObj *object);
void objSetBaseAndValue(LmapObj *object, s32 base, u32 value);
void entryListCollectMatches(LmapObj *object);

/* Enters map transition state `next` (unkCC), restarting its timer and counter unless already in it. */
static __inline void lmapMainEnterTransition(LmapMainState *state, u32 next)
{
    if (state->unkCC != next) {
        state->unkCC = next;
        state->unkD0 = 0;
        state->unkD4 = 0;
    }
}

// Reset the map actor to a destination's spawn and enter its transition state.
void FUN_002d1b94(u32 destination, u32 flags)
{
    LmapMainState *state = g_lmapMainState;
    u32 index = table23FindRecordByKey(state->unk40, destination, flags);
    const SceneSpawnRecord *spawn = reinterpret_cast<const SceneSpawnRecord *>(dataTableGetRecord23(index));
    const MapDepartTargetRecord *target = reinterpret_cast<const MapDepartTargetRecord *>(spawn);
    mapDepartSetTarget(target->group, target->map, target->target);
    state->unk48 = destination;
    g_gameState.unk004Value = destination;
    LmapSceneTransform *transform = &g_lmapScene->transform;
    transform->position[0] = static_cast<f32>(spawn->x);
    transform->position[1] = static_cast<f32>(spawn->y);
    transform->position[2] = static_cast<f32>(spawn->z);
    MapVector position = *reinterpret_cast<MapVector *>(transform->position);
    *reinterpret_cast<MapVector *>(transform->positionSnapshotA) = position;
    transform->headingDegrees = 180.0f;
    transform->headingCopy = 180.0f;
    *reinterpret_cast<MapVector *>(transform->positionSnapshotB) = position;
    mapCollisionRelease();
    if (state->unk40 == 101) {
        FUN_0027b2b4(state->unk40, state->unk48, 101, 10);
    } else {
        FUN_0027b2b4(state->unk40, state->unk48, 0, 0);
    }
    lmapUpdateMapBgm();
    FUN_00264444(&state->obj);
    objSetBaseAndValue(&state->obj, state->unk40 - 100, state->unk48);
    entryListCollectMatches(&state->obj);
    lmapMainEnterTransition(g_lmapMainState, 3);
    mapDepartSetTarget(-1, -1, -1);
}
}
