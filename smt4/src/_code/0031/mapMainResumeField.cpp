/* NON_MATCHING: 87 lines (shape 65); the calls, stores, bases and block order follow retail except in the exit that
 * leaves the map: retail tests the two map ranges and the 5/6 area with separate branches, each running into its own
 * copy of the `unk0B4 < 99` sound test (the build merges the three tests with conditional instructions and keeps one
 * sound test), and then loads the pending jump through r1 (r0 here). */
#include "map/mapMain.h"
#include "map/MapSpawn.h"
#include "map/SceneSpawn.h"
#include "map/LmapGlobals.h"
#include "map/LmapViewGlobals.h"
#include "game/GameState.h"
#include "addon/aocMain.h"
#include "gamedata/DataTableAccess_AocTable23.h"
#include "code/Code0013.h"
#include "code/Code002c_Smt4.h"

enum {
    PAIRED_STATE_READY = 3,         /* pairedAvailabilityGetState: the screen fades in */
    MAP_SE_AREA_BASE = 0x10000AF    /* + the area's sound: the cue played when a range of maps is left */
};

extern "C" {
extern MapMain *g_mapMain;
s32 messageMainGetChoiceResult(void);
void lmapSetSceneId(s32 id);
void naviRegisterTransitionsAndRequest(s32 firstId, s32 firstValue, s32 secondId, s32 secondValue, s32 thirdId,
                                       s32 thirdValue);
void navigationApplyOptionalValue(u32 value);
void FUN_00273358(u32 handle);
int FUN_0026f950(void);
void mapSaveReturnSnapshot(void);
void mapInitializeSavedAndTargetState(void);
s32 soundPlaySeUnpanned(u32 id);
u32 table23FindRecordByKey(s32 category, s32 subtype, u32 variant);
void navigationSetArguments(u32 first, u32 second, u32 third, f32 value);
void navigationApplyArguments(u32 first, u32 second, u32 third);
void navigationSetFieldValue(u32 value);
void mapDepartSetTarget(s32 group, s32 map, u32 target);
void battlePrepareEncounter(void);
void lmapCameraSetMode(s32 mode);
void FUN_00273840(s32 enabled);
void mapMainEnterScene(void);
void mapAmbientAudioUpdate(void);
void FUN_00271010(u8 pending);

/* The map mode's step that resumes the field: handles the answer to a pending prompt, leaves the map when one of
 * the exits is requested, and otherwise enters the scene, at the pending map jump's spawn point if there is one. */
void mapMainResumeField(void)
{
    MapMain *map = g_mapMain;

    if (g_gameState.map.unk50) {
        g_gameState.map.unk50 = 0;
        if (messageMainGetChoiceResult() == 0) {
            lmapSetSceneId(38);
            map->state = 82;
            map->stateTime = 0;
            naviRegisterTransitionsAndRequest(g_gameState.unk0F8, g_gameState.unk0F9, g_gameState.unk0FA,
                                              g_gameState.unk0FB, g_gameState.unk0FC, g_gameState.unk0FD);
            navigationApplyOptionalValue(1);
            return;
        }
        g_mapSelection.selection.group = -1;
        g_gameState.entryValue = 0;
        FUN_00273358(-1);
    } else if (g_gameState.map.unk4D) {
        g_gameState.map.unk4D = 0;
        if (messageMainGetChoiceResult() == 0) {
            naviRegisterTransitionsAndRequest(g_gameState.unk0F8, g_gameState.unk0F9, g_gameState.unk0FA,
                                              g_gameState.unk0FB, g_gameState.unk0FC, g_gameState.unk0FD);
            map->state = 44;
            map->stateTime = 0;
            return;
        }
        g_mapSelection.selection.group = -1;
        g_gameState.entryValue = 0;
        FUN_00273358(-1);
    } else if (g_gameState.map.unk4E) {
        g_gameState.map.unk4E = 0;
        if (messageMainGetChoiceResult() == 0) {
            naviRegisterTransitionsAndRequest(g_gameState.unk0F8, g_gameState.unk0F9, g_gameState.unk0FA,
                                              g_gameState.unk0FB, g_gameState.unk0FC, g_gameState.unk0FD);
            map->unk14 = 1;
            lmapSetSceneId(38);
            map->state = 60;
            return;
        }
        g_mapSelection.selection.group = -1;
        g_gameState.entryValue = 0;
        FUN_00273358(-1);
    } else if (g_gameState.map.unk4F) {
        g_gameState.map.unk4F = 0;
        FUN_00273358(-1);
    }

    if (FUN_0026f950() != 0) {
        map->stateTime = 0;
        map->state = 111;
        map->unk0D = 1;
        return;
    }
    if (g_gameState.entryValue != 0) {
        mapSaveReturnSnapshot();
        map->stateTime = 0;
        map->state = 111;
        map->unk14 = 1;
        return;
    }
    if (g_gameState.requested != 0) {
        g_gameState.requested = 0;
        naviRegisterTransitionsAndRequest(g_gameState.unk0F8, g_gameState.unk0F9, g_gameState.unk0FA,
                                          g_gameState.unk0FB, g_gameState.unk0FC, g_gameState.unk0FD);
        s32 mapId = g_gameState.mapId;
        if ((u32)(mapId - 31) > 4 && (u32)(mapId - 25) > 5 && (mapId != 5 || g_gameState.areaId != 6)) {
            mapSaveReturnSnapshot();
            map->unk38 = g_gameState.argument;
            map->unk0E = 1;
            map->state = 111;
            map->stateTime = 0;
            return;
        }
        if (g_gameState.unk0B4 < 99)
            soundPlaySeUnpanned(g_gameState.unk0B4 + MAP_SE_AREA_BASE);
        mapInitializeSavedAndTargetState();
        map->unk38 = g_gameState.argument;
        map->unk0E = 1;
        map->state = 111;
        map->stateTime = 0;
        return;
    }

    if (g_mapSelection.selection.group != -1) {
        s32 area = map->areaId;
        s8 darkZone = g_gameState.map.darkZone;
        g_gameState.map.darkZone = g_gameState.unk048 != 0;
        if (mapGetDepartureIndex() != 0)
            area = mapGetDepartureIndex();
        if (map->mapId != g_mapSelection.selection.group || g_mapSelection.selection.map != area ||
            g_gameState.map.darkZone != darkZone) {
            map->state = 111;
            return;
        }
        u32 index = table23FindRecordByKey(map->mapId, area, g_mapSelection.selection.target);
        if (index != (u32)-1) {
            SceneSpawnRecord *record = reinterpret_cast<SceneSpawnRecord *>(dataTableGetRecord23(index));
            LmapScene *scene = g_lmapScene;
            scene->pose.position.x = (f32)record->x;
            scene->pose.position.y = (f32)record->y;
            scene->pose.position.z = (f32)record->z;
            scene->pose.targetPosition = scene->pose.position;
            scene->pose.heading = (f32)record->heading;
            scene->pose.targetHeading = scene->pose.heading;
            g_mapCamera->heading = (f32)record->heading;
        }
        navigationSetArguments(g_gameState.unk00C, g_gameState.unk010, g_gameState.currentObjectId,
                               g_lmapScene->pose.heading);
        navigationApplyArguments(g_gameState.unk00C, g_gameState.unk010, g_gameState.currentObjectId);
        navigationSetFieldValue(g_gameState.unk00C);
        navigationApplyOptionalValue(0);
        mapDepartSetTarget(-1, -1, -1);
        battlePrepareEncounter();
        lmapCameraSetMode(0);
        FUN_00273840(0);
        lmapSetSceneId(1);
        map->unk47 = 1;
        g_mapCamera->enabled = 1;
        g_gameState.map.unk29 = 1;
        g_gameState.map.transitionCompleted = 1;
        g_gameState.inputBlocked = 0;
        g_gameState.unk020 = 0;
        map->state = 21;
        map->stateTime = 0;
        mapMainEnterScene();
        mapAmbientAudioUpdate();
        if (pairedAvailabilityGetState(0) == PAIRED_STATE_READY)
            screenFadeStartIn(0, 10, 0xFF);
        if (pairedAvailabilityGetState(1) == PAIRED_STATE_READY)
            screenFadeStartIn(1, 10, 0xFF);
    } else {
        if (g_aocMain->jumpRequested) {
            g_aocMain->jumpRequested = 0;
            map->state = 31;
            map->stateTime = 0;
            return;
        }
        lmapCameraSetMode(0);
        FUN_00273840(0);
        lmapSetSceneId(1);
        map->unk47 = 1;
        g_mapCamera->enabled = 1;
        g_gameState.map.unk29 = 1;
        g_gameState.map.transitionCompleted = 1;
        g_gameState.map.mapRegistrationPending = 0;
        mapMainEnterScene();
        g_gameState.inputBlocked = 0;
        g_gameState.unk020 = 0;
        FUN_00271010(0);
        map->state = 21;
        map->stateTime = 0;
        if (pairedAvailabilityGetState(0) == PAIRED_STATE_READY)
            screenFadeStartIn(0, 10, 0xFF);
        if (pairedAvailabilityGetState(1) == PAIRED_STATE_READY)
            screenFadeStartIn(1, 10, 0xFF);
    }
}
}
