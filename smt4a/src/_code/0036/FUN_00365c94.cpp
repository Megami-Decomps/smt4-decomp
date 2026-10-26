/* NON_MATCHING: position snapshot copies use mixed GPR/VFP loads, and scene/navigation base registers differ. */
#include "map/SceneSpawn.h"
#include "map/mapMain.h"
#include "map/lmapMain.h"

extern "C" {
extern MapMainA *g_mapMain;
extern LmapSceneA *g_lmapScene;
extern LmapExtraA *g_lmapView;
extern GameStateA g_gameState;
u32 FUN_003b5714(s32, s32, u32);
const SceneSpawnRecord *dataTableGetRecord23(u32);
void navigationSetArguments(s32, s32, f32);
void naviMainSetRequestTriple(s32, s32, u32);
void naviMainApplyRequestValue(s32);
void naviMainSetPosition(LmapObj *);
void naviMainSetRequestValue(s32);
void FUN_0033e014(s32, s32);

void FUN_00365c94(s32 map, s32 area, u32 point)
{
    struct StartupFlags { u8 prefix[0x23]; u8 started; };
    struct NavigationRegion { s32 map; s32 area; };
    MapMainA *main = g_mapMain;
    reinterpret_cast<StartupFlags *>(main)->started = 1;
    const SceneSpawnRecord *spawn = dataTableGetRecord23(FUN_003b5714(map, area, point));
    LmapSceneTransform *transform = &g_lmapScene->transform;
    MapVector *position = reinterpret_cast<MapVector *>(transform->position);
    position->x = static_cast<f32>(spawn->x);
    position->y = static_cast<f32>(spawn->y);
    position->z = static_cast<f32>(spawn->z);
    *reinterpret_cast<MapVector *>(transform->positionSnapshotA) = *position;
    *reinterpret_cast<MapVector *>(transform->positionSnapshotB) = *position;
    transform->headingDegrees = static_cast<f32>(spawn->heading);
    transform->headingCopy = transform->headingDegrees;
    g_lmapView->followPose.heading = static_cast<f32>(spawn->heading);
    g_gameState.mode = main->transition.mapId = spawn->key.map;
    g_gameState.submode = main->transition.areaId = spawn->key.area;
    g_gameState.currentObjectId = spawn->key.variant;
    NavigationRegion *region = reinterpret_cast<NavigationRegion *>(g_gameState.unk00c);
    region->map = main->transition.mapId;
    region->area = main->transition.areaId;
    navigationSetArguments(region->map, region->area, transform->headingDegrees);
    naviMainSetRequestTriple(region->map, region->area, g_gameState.currentObjectId);
    g_gameState.currentObjectId = spawn->key.variant == 0xFF ? ~0u : spawn->key.variant;
    naviMainApplyRequestValue(region->map);
    naviMainSetPosition(&g_lmapScene->obj);
    naviMainSetRequestValue(1);
    FUN_0033e014(g_gameState.mode, g_gameState.submode);
    main->unk28 = 0x8A;
    main->unk2C = 0;
}
}
