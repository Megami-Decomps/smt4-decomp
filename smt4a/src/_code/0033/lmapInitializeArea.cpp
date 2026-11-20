#include "map/lmapMain.h"
#include "map/LmapGlobals.h"
#include "game/GameStateA.h"
#include "shard/W6_W6Match2_AocTable23.h"
#include "Model/MoriModelManager.h"
#include "map/LmapMainGlobals.h"

struct AreaHandleOwner { u32 unk00; u32 flags; };
/* An actor model (MoriModelContent) as this unit releases it: its body at +4. */
struct AreaHandle { u32 unk00; AreaHandleOwner *owner; };
struct AreaSpawn {
    s8 map, area;
    u8 place;
    u8 unk03;
    s16 x, y, z;
};
extern "C" {
u32 table23FindRecordByKey(s32 category, s32 subtype, u32 variant);
Table23Record *dataTableGetRecord23(u32 index);
void mapPlaceSet(s32, s32, s32);
void mapCollisionRelease();
void mapCollisionLoad(s32, u32, u32, u32);
void lmapUpdateMapBgm();
void lmapApplyMapAndArea();
void FUN_00378000();
void objectPoolDestroyAll(LmapObj *);
void stateSetterSetFromBase(LmapObj *, s32, u32);
void fieldBuildAreaPlacementList(LmapObj *);
void FUN_004bc95c(s32, u32);
void FUN_0036a434(LmapMainStateA *);
void FUN_003699e4();
void lmapApplyAreaHandleVisibility();
void FUN_003ca5a4();
void lmapInitializeActorHandles();
void FUN_0036aa04(LmapMainStateA *);
void controllerUpdateWithIdleTimer(LmapObj *);
void FUN_00297c3c();
void FUN_00234b30();
void FUN_002737a8();

void lmapInitializeArea(u32 area, u32 spawnId)
{
    LmapMainStateA *state = g_lmapMainState;
    const AreaSpawn *spawn = reinterpret_cast<const AreaSpawn *>(
        dataTableGetRecord23(table23FindRecordByKey(state->mapId, area, spawnId)));
    mapPlaceSet(spawn->map, spawn->area, spawn->place);
    state->areaId = area;
    g_gameState.areaId = area;
    g_lmapScene->pose.position.x = (f32)spawn->x;
    g_lmapScene->pose.position.y = (f32)spawn->y;
    g_lmapScene->pose.position.z = (f32)spawn->z;
    MapVector position = g_lmapScene->pose.position;
    g_lmapScene->pose.targetPosition = position;
    g_lmapScene->pose.previousPosition = position;
    g_lmapScene->pose.heading = 180.0f;
    g_lmapScene->pose.targetHeading = 180.0f;
    mapCollisionRelease();
    if (state->mapId == 101) {
        mapCollisionLoad(state->mapId, state->areaId, 101, 10);
    } else {
        mapCollisionLoad(state->mapId, state->areaId, 0, 0);
    }
    lmapUpdateMapBgm();
    lmapApplyMapAndArea();
    FUN_00378000();
    objectPoolDestroyAll(&state->obj);
    stateSetterSetFromBase(&state->obj, state->mapId - 100, state->areaId);
    fieldBuildAreaPlacementList(&state->obj);
    FUN_004bc95c(state->mapId, area);
    FUN_0036a434(state);
    FUN_003699e4();
    lmapApplyAreaHandleVisibility();
    FUN_003ca5a4();
    for (s32 i = 0; i < 32; ++i) {
        AreaHandle *handle = reinterpret_cast<AreaHandle *>(state->actors[i]);
        if (handle && handle->owner)
            ptrListRemoveClearOwner(g_handleRegistry, handle->owner);
    }
    lmapInitializeActorHandles();
    state = g_lmapMainState;
    if (state->mapId != 100)
        FUN_003699e4();
    for (s32 i = 0; i < 32; ++i) {
        AreaHandle *handle = reinterpret_cast<AreaHandle *>(state->actors[i]);
        if (handle)
            handle->owner->flags &= ~3u;
    }
    g_gameState.loading = 0;
    FUN_0036aa04(state);
    controllerUpdateWithIdleTimer(&state->obj);
    FUN_00297c3c();
    FUN_00234b30();
    FUN_002737a8();
    mapPlaceSet(-1, -1, -1);
}
}
