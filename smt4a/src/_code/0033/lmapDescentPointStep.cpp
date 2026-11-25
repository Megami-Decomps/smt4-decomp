/* NON_MATCHING: 186 raw / 138 shape lines (from the raw decompilation's 688/656), lmapOverviewPointStep's sibling with the
 * descent states: the blocks, calls and constants are retail's. `point` and `heading` live at function scope, as
 * retail's missing tail call to mapSelectContainingRegions shows. Left: g_gameState's address and the zero swap r6/r7, the float
 * constants sit in other VFP registers, and retail loads g_gameState+0x50 once in the confirm branch without using
 * it (not reproduced). */
#include "game/GameStateA.h"
#include "map/LmapGlobals.h"
#include "map/LmapViewGlobals.h"
#include "map/lmapMain.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "util/TrigF32.h"
#include "code/Code0013_Smt4a.h"
#include "code/Code0014_Smt4a.h"
#include "code/Code0014.h"
#include "code/Code0032_Smt4a.h"
#include "map/MapActionMarker.h"

extern "C" {

void sysPlaySe(u32 id);
u32 padButtonIsPressed(u32 button);
s32 inputConfirmPressed(void);
s32 inputIsQuestMenuPressed(void);
void mapEaseSceneHeading(void);
void lmapCameraSetMode(s32 mode);
void mapSetSceneState(s32 state);
u32 mapIfApplyEntryRequest(u8 blocked, s32 index);
void mapIfShowActionMarker(MapMarkerPosition placement);
void mapIfReleaseSlot4(void);
void mapIfReleaseResource(void);
bool mapIfHasSelection(void);
void FUN_002342b8(void);
u32 FUN_002e364c(f32 *target);
void mapSelectContainingRegions(f32 x, f32 z);
void mapObjFindNearestPointByCategory(s32 firstCategory, s32 secondCategory, s32 thirdCategory, MapVector *position,
                                      f32 *heading, s32 vertical, MapVector origin);

/* Steps the scene through the overview point's approach on the maps with a descent: walk up to the point and show
 * its marker; on confirm (states 10-12) turn to the nearest descent point, announce it and sink into it, then leave
 * for scene state 22; on cancel (90-92) go back to the map. Eases the position toward its target on the way. */
void lmapDescentPointStep(void)
{
    u8 volume = soundVolumeSettingGet();
    MapVector point; /* the descent point and its heading, found on confirm */
    f32 heading;
    if (g_lmapScene->state < 10) {
        mapEaseSceneHeading();
        LmapSceneA *scene = g_lmapScene;
        scene->pose.position.x += (scene->pose.targetPosition.x - scene->pose.position.x) * (1.0f / 3.0f);
        scene->pose.position.y += (scene->pose.targetPosition.y - scene->pose.position.y) * (1.0f / 6.0f);
        scene->pose.position.z += (scene->pose.targetPosition.z - scene->pose.position.z) * (1.0f / 3.0f);
    }

    switch (g_lmapScene->state) {
    case 0: {
        /* walk to a point 25 units ahead of the overview point */
        g_lmapScene->moveMode = 0;
        g_lmapScene->moveSpeed = 3.0f;
        g_lmapScene->unk06C = 0;
        g_lmapScene->pose.targetPosition = g_gameState.overviewPosition;
        g_lmapScene->pose.targetPosition.x += libm_sinf(g_gameState.pointHeading * 0.017453292f) * 25.0f;
        g_lmapScene->pose.targetPosition.z += libm_cosf(g_gameState.pointHeading * 0.017453292f) * 25.0f;
        g_lmapScene->pose.targetHeading = g_gameState.overviewHeading;
        lmapCameraSetMode(13);
        g_lmapView->contextMode = 1;
        sysPlaySe(220);
        mapIfApplyEntryRequest(1, g_gameState.overviewRecord);
        MapMarkerPosition marker = { g_gameState.overviewPosition.x, g_gameState.overviewPosition.y,
                                     g_gameState.overviewPosition.z, g_gameState.pointHeading };
        mapIfShowActionMarker(marker);
        g_lmapScene->state++;
        g_lmapScene->stateTime = 0;
        break;
    }
    case 1:
        g_lmapScene->stateTime++;
        mapIfApplyEntryRequest(1, g_gameState.overviewRecord);
        if (g_lmapScene->stateTime > 2) {
            g_lmapScene->moveMode = 28;
            g_lmapScene->moveSpeed = 2.0f;
            g_lmapScene->state++;
            g_lmapScene->stateTime = 0;
        }
        break;
    case 2:
        g_lmapScene->stateTime++;
        mapIfApplyEntryRequest(1, g_gameState.overviewRecord);
        if (inputConfirmPressed()) {
            g_lmapScene->state = 10;
            g_lmapScene->stateTime = 0;
            g_lmapView->unk00C = 2;
            /* face away from the nearest descent point, standing 250 below it */
            point = g_lmapScene->pose.targetPosition;
            mapObjFindNearestPointByCategory(2, 10, 102, &point, &heading, 1, g_lmapScene->pose.targetPosition);
            heading += 180.0f;
            if (heading < 0.0f)
                heading += 360.0f;
            if (heading > 360.0f)
                heading -= 360.0f;
            g_lmapScene->pose.targetHeading = heading;
            g_lmapScene->pose.targetPosition = point;
            g_lmapScene->pose.targetPosition.y = point.y - 250.0f;
            g_lmapScene->pose.targetPosition.x += libm_sinf((g_lmapScene->pose.heading + 180.0f) * 0.017453292f) * 25.0f;
            g_lmapScene->pose.targetPosition.z += libm_cosf((g_lmapScene->pose.heading + 180.0f) * 0.017453292f) * 25.0f;
        } else if (padButtonIsPressed(6) || inputIsQuestMenuPressed()) {
            g_lmapView->heading = g_lmapScene->pose.targetHeading;
            g_lmapView->contextMode = 0;
            lmapCameraSetMode(0);
            g_lmapScene->moveMode = 0;
            g_lmapScene->moveSpeed = 5.0f;
            mapIfApplyEntryRequest(0, g_gameState.overviewRecord);
            mapIfReleaseSlot4();
            g_lmapScene->state = 90;
            g_lmapScene->stateTime = 0;
        }
        break;
    case 10:
        if (++g_lmapScene->stateTime == 1) {
            if (g_gameState.mapId != 38 && g_gameState.mapId != 26)
                soundActorStartOnFreeChannel(0x10002bb, *(const SoundActorQueuePosition *)&g_lmapScene->pose.position);
            mapDepartSpawnPlayerEffect(-1);
            libm_sinf(g_lmapScene->pose.heading * 0.017453292f);
            libm_cosf(g_lmapScene->pose.heading * 0.017453292f);
            soundVolumeSettingSet(messageVoiceBankGet());
            sysPlayVoice(0x10002e7);
            soundVolumeSettingSet(volume);
        }
        if (g_lmapScene->stateTime == 2) {
            g_lmapScene->moveMode = 15;
            g_lmapScene->moveSpeed = 0.0f;
            g_gameState.transitionCompleted = 0;
            mapIfReleaseSlot4();
            g_lmapScene->pose.heading = g_lmapScene->pose.targetHeading;
            g_lmapScene->pose.position = g_lmapScene->pose.targetPosition;
            g_lmapScene->state++;
            if (g_gameState.mapId == 38 || g_gameState.mapId == 26)
                soundActorStartOnFreeChannel(0x10000f7, *(const SoundActorQueuePosition *)&g_lmapScene->pose.position);
            g_lmapScene->stateTime = 0;
        }
        break;
    case 11: {
        /* sink: the target rises 2 a frame and the position follows it at once */
        s32 time = ++g_lmapScene->stateTime;
        g_lmapScene->pose.targetPosition.y += 2.0f;
        g_lmapScene->pose.position = g_lmapScene->pose.targetPosition;
        if (g_gameState.mapId != 38 && g_gameState.mapId != 26) {
            if (time == 11 || time == 28 || time == 41) {
                soundActorStartOnFreeChannel((time & 3) + 0x10002bb,
                                             *(const SoundActorQueuePosition *)&g_lmapScene->pose.position);
                mapDepartSpawnPlayerEffect(-1);
            }
        } else if (time == 11 || time == 28 || time == 41) {
            mapDepartSpawnPlayerEffect(-1);
        }
        if (g_lmapScene->stateTime == 30)
            FUN_002342b8();
        if (g_lmapScene->stateTime > 30 && !mapIfHasSelection()) {
            mapIfReleaseResource();
            g_lmapView->heading = g_lmapScene->pose.targetHeading;
            g_lmapView->contextMode = 0;
            lmapCameraSetMode(0);
            g_lmapScene->moveMode = 0;
            g_lmapScene->moveSpeed = 0.0f;
            g_lmapScene->state++;
            g_lmapScene->stateTime = 0;
        }
        break;
    }
    case 12:
        mapSetSceneState(22);
        break;
    case 90:
        g_lmapScene->state++;
        g_lmapScene->stateTime = 0;
        break;
    case 91:
        mapIfReleaseResource();
        g_lmapScene->state++;
        g_lmapScene->stateTime = 0;
        break;
    case 92:
        if (++g_lmapScene->stateTime > 3)
            mapSetSceneState(1);
        break;
    }
    FUN_002e364c(&g_lmapScene->pose.targetPosition.x);
    mapSelectContainingRegions(g_lmapScene->pose.position.x, g_lmapScene->pose.position.z);
}

} /* extern "C" */
