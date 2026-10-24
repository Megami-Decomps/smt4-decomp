/* NON_MATCHING: transform snapshots use integer copies instead of VFP; scene-base and transition store scheduling differ. */
#include "map/lmapMain.h"
#include "map/MapDepartTarget.h"
#include "map/SceneSpawn.h"

extern "C" {
extern LmapMainState *g_lmapMainState;
extern LmapScene *g_lmapScene;
extern GameState g_gameState;
void FUN_0027d7b0(s32 map, u32 destination, u32 flags);
const SceneSpawnRecord *dataTableGetRecord23(void);
void mapDepartSetTarget(s32 group, s32 map, s32 target);
void mapCollisionRelease(void);
void FUN_0027b2b4(s32 map, u32 destination, s32 group, s32 target);
void FUN_00266a2c(void);
void FUN_00264444(LmapObj *object);
void objSetBaseAndValue(LmapObj *object, s32 base, u32 value);
void entryListCollectMatches(LmapObj *object);

// Reset the map actor to a destination's spawn and enter its transition state.
void FUN_002d1b94(u32 destination, u32 flags)
{
    LmapMainState *state = g_lmapMainState;
    FUN_0027d7b0(state->unk40, destination, flags);
    const SceneSpawnRecord *spawn = dataTableGetRecord23();
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
    FUN_0027b2b4(state->unk40, state->unk48, state->unk40 == 101 ? 101 : 0,
                  state->unk40 == 101 ? 10 : 0);
    FUN_00266a2c();
    FUN_00264444(&state->obj);
    objSetBaseAndValue(&state->obj, state->unk40 - 100, state->unk48);
    entryListCollectMatches(&state->obj);
    struct MapTransitionView {
        u32 state;
        u32 timer;
        u32 counter;
    };
    MapTransitionView *transition = reinterpret_cast<MapTransitionView *>(&g_lmapMainState->unkCC);
    if (transition->state != 3) {
        transition->state = 3;
        transition->timer = 0;
        transition->counter = 0;
    }
    mapDepartSetTarget(-1, -1, -1);
}
}
