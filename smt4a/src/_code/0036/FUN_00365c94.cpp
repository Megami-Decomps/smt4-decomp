/* NON_MATCHING: retail copies the spawn position into the target and previous positions with VFP block copies (vldmia/vstmia from the scene base), where this build forwards the stored values through core registers; pool order and the scene/state base registers differ with it. */
#include "map/SceneSpawn.h"
#include "game/GameStateA.h"
#include "map/mapMain.h"
#include "map/LmapViewGlobals.h"

extern "C" {
extern MapMainA *g_mapMain;
u32 table23FindRecordByKey(s32, s32, u32);
const SceneSpawnRecord *dataTableGetRecord23(u32);
void navigationSetArguments(s32, s32, f32);
void naviMainSetRequestTriple(s32, s32, u32);
void naviMainApplyRequestValue(s32);
void naviMainSetPosition(const MapVector *position);
void naviMainSetRequestValue(s32);
void FUN_0033e014(s32, s32);

void FUN_00365c94(s32 map, s32 area, u32 point)
{
    struct StartupFlags { u8 prefix[0x23]; u8 started; };
    MapMainA *main = g_mapMain;
    reinterpret_cast<StartupFlags *>(main)->started = 1;
    const SceneSpawnRecord *spawn = dataTableGetRecord23(table23FindRecordByKey(map, area, point));
    g_lmapScene->pose.position.x = (f32)spawn->x;
    g_lmapScene->pose.position.y = (f32)spawn->y;
    g_lmapScene->pose.position.z = (f32)spawn->z;
    g_lmapScene->pose.targetPosition = g_lmapScene->pose.position;
    g_lmapScene->pose.previousPosition = g_lmapScene->pose.position;
    g_lmapScene->pose.heading = (f32)spawn->heading;
    g_lmapScene->pose.targetHeading = g_lmapScene->pose.heading;
    g_lmapView->heading = static_cast<f32>(spawn->heading);
    g_gameState.mapId = main->transition.mapId = spawn->key.map;
    g_gameState.areaId = main->transition.areaId = spawn->key.area;
    g_gameState.currentObjectId = spawn->key.variant;
    g_gameState.naviMapId = main->transition.mapId;
    g_gameState.naviAreaId = main->transition.areaId;
    navigationSetArguments(g_gameState.naviMapId, g_gameState.naviAreaId, g_lmapScene->pose.heading);
    naviMainSetRequestTriple(g_gameState.naviMapId, g_gameState.naviAreaId, g_gameState.currentObjectId);
    g_gameState.currentObjectId = spawn->key.variant == 0xFF ? ~0u : spawn->key.variant;
    naviMainApplyRequestValue(g_gameState.naviMapId);
    naviMainSetPosition(&g_lmapScene->pose.position);
    naviMainSetRequestValue(1);
    FUN_0033e014(g_gameState.mapId, g_gameState.areaId);
    main->unk28 = 0x8A;
    main->unk2C = 0;
}
}
