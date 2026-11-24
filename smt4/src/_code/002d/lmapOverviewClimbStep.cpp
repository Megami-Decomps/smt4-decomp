#include "common.h"
#include "map/LmapPlayerModel.h"
#include "map/LmapGlobals.h"
#include "map/LmapViewGlobals.h"
#include "map/MapActionMarker.h"
#include "map/MapVector.h"
#include "game/GameState.h"
#include "quest_center/qcMain.h"
#include "util/TrigF32.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"

extern "C" {

void mapIfActivateRecord(s32 active, u32 record);
void mapIfShowActionMarker(MapMarkerPosition position);
void mapIfReleaseSlot3(void);
bool mapIfHasSelection(void);
void mapDestroyOverlayModel(void);
void mapInterfaceSetStateTwo(void);
void lmapFindNearestMatchingTargetPoint(s32 firstKind, s32 secondKind, s32 thirdKind, MapVector *output, f32 *yaw,
                                        s32 direction, MapVector origin);
void lmapSetSceneId(u32 scene);
void lmapCameraSetMode(s32 mode);
void mapSelectContainingRegions(f32 x, f32 z);
void FUN_002804ec(f32 *position);
void mapEaseSceneHeading(void);
s32 inputIsQuestMenuPressed(void);
s32 inputConfirmPressed(void);
s32 padIsButtonPressed(u32 button);

/* Per-frame step of the lmap scene that leaves the overview position: eases the player, shows the action
 * marker until the player confirms (then walks to the nearest exit point, rises and switches to scene 22)
 * or cancels (then switches back to scene 1). */
void lmapOverviewClimbStep(void)
{
    MapVector exitPoint;
    f32 yaw;

    if (g_lmapScene->state < 10) {
        mapEaseSceneHeading();
        LmapScene *scene = g_lmapScene;
        scene->pose.position.x += (scene->pose.targetPosition.x - scene->pose.position.x) * 0.33333334f;
        scene->pose.position.y += (scene->pose.targetPosition.y - scene->pose.position.y) * 0.16666667f;
        scene->pose.position.z += (scene->pose.targetPosition.z - scene->pose.position.z) * 0.33333334f;
    }

    LmapScene *scene = g_lmapScene;
    switch (scene->state) {
    case 0:
        scene->moveMode = 0;
        scene->moveSpeed = 3.0f;
        scene->unk06C = 0;
        scene->pose.targetPosition = g_gameState.overviewPosition;
        g_lmapScene->pose.targetPosition.x += libm_sinf(g_gameState.heading * 0.017453292f) * 25.0f;
        g_lmapScene->pose.targetPosition.z += libm_cosf(g_gameState.heading * 0.017453292f) * 25.0f;
        g_lmapScene->pose.targetHeading = g_gameState.overviewHeading;
        lmapCameraSetMode(13);
        g_mapCamera->contextMode = 1;
        buttonHelpSetPreset(218);
        mapIfActivateRecord(1, g_gameState.overviewRecord);
        {
            MapMarkerPosition marker;
            marker.x = g_gameState.overviewPosition.x;
            marker.y = g_gameState.overviewPosition.y;
            marker.z = g_gameState.overviewPosition.z;
            marker.w = g_gameState.heading;
            mapIfShowActionMarker(marker);
        }
        g_lmapScene->state++;
        g_lmapScene->stateTime = 0;
        break;

    case 1:
        scene->stateTime++;
        mapIfActivateRecord(1, g_gameState.overviewRecord);
        if (g_lmapScene->stateTime > 2) {
            g_lmapScene->moveMode = 28;
            g_lmapScene->moveSpeed = 2.0f;
            g_lmapScene->state++;
            g_lmapScene->stateTime = 0;
        }
        break;

    case 2:
        scene->stateTime++;
        mapIfActivateRecord(1, g_gameState.overviewRecord);
        if (inputConfirmPressed() != 0) {
            /* Walk to the nearest exit point, facing away from it. */
            g_lmapScene->state = 10;
            g_lmapScene->stateTime = 0;
            /* The camera preset depends on unk04C as in the descent's step (lmapOverviewDescendStep: 3 or 4); here both are 2. */
            if (g_gameState.unk04C == 0) {
                g_mapCamera->unk00C = 2;
            } else {
                g_mapCamera->unk00C = 2;
            }
            exitPoint = g_lmapScene->pose.targetPosition;
            lmapFindNearestMatchingTargetPoint(2, 10, 102, &exitPoint, &yaw, 1, g_lmapScene->pose.targetPosition);
            yaw += 180.0f;
            if (yaw < 0.0f) {
                yaw += 360.0f;
            }
            if (yaw > 360.0f) {
                yaw -= 360.0f;
            }
            g_lmapScene->pose.targetHeading = yaw;
            g_lmapScene->pose.targetPosition = exitPoint;
            g_lmapScene->pose.targetPosition.y -= 250.0f;
            g_lmapScene->pose.targetPosition.x += libm_sinf((g_lmapScene->pose.heading + 180.0f) * 0.017453292f) * 25.0f;
            g_lmapScene->pose.targetPosition.z += libm_cosf((g_lmapScene->pose.heading + 180.0f) * 0.017453292f) * 25.0f;
        } else if (padIsButtonPressed(6) != 0 || inputIsQuestMenuPressed() != 0) {
            g_mapCamera->heading = g_lmapScene->pose.targetHeading;
            g_mapCamera->contextMode = 0;
            lmapCameraSetMode(0);
            g_lmapScene->moveMode = 0;
            g_lmapScene->moveSpeed = 5.0f;
            mapIfActivateRecord(0, g_gameState.overviewRecord);
            mapIfReleaseSlot3();
            g_lmapScene->state = 90;
            g_lmapScene->stateTime = 0;
        }
        break;

    case 10:
        scene->stateTime++;
        if (scene->stateTime == 1) {
            scene->moveMode = 15;
            scene->moveSpeed = 0.0f;
            soundActorStartOnFreeChannel(0x1000212, *(SoundActorQueuePosition *)&scene->pose.position);
            mapDepartSpawnPlayerEffect(-1);
            SoundActorQueuePosition above;
            above.x = g_lmapScene->pose.position.x;
            above.y = g_lmapScene->pose.position.y;
            above.z = g_lmapScene->pose.position.z;
            above.x += libm_sinf(g_lmapScene->pose.heading * 0.017453292f) * 50.0f;
            above.z += libm_cosf(g_lmapScene->pose.heading * 0.017453292f) * 50.0f;
            above.y += 150.0f;
            soundActorStartOnFreeChannel(0x1000240, above);
        }
        if (g_lmapScene->stateTime == 2) {
            g_gameState.map.transitionCompleted = 0;
            mapIfReleaseSlot3();
            g_lmapScene->pose.heading = g_lmapScene->pose.targetHeading;
            g_lmapScene->pose.position = g_lmapScene->pose.targetPosition;
            g_lmapScene->state++;
            g_lmapScene->stateTime = 0;
        }
        break;

    case 11:
        /* Rise, with a sound at three points of the climb. */
        scene->pose.targetPosition.y += 2.0f;
        scene->pose.position = scene->pose.targetPosition;
        scene->stateTime++;
        if (scene->stateTime == 11 || scene->stateTime == 28 || scene->stateTime == 41) {
            soundActorStartOnFreeChannel(0x1000212 + (scene->stateTime & 3),
                                         *(SoundActorQueuePosition *)&scene->pose.position);
            mapDepartSpawnPlayerEffect(-1);
        }
        if (g_lmapScene->stateTime == 30) {
            mapInterfaceSetStateTwo();
        }
        if (g_lmapScene->stateTime > 30 && !mapIfHasSelection()) {
            mapDestroyOverlayModel();
            g_mapCamera->heading = g_lmapScene->pose.targetHeading;
            g_mapCamera->contextMode = 0;
            lmapCameraSetMode(0);
            g_lmapScene->moveMode = 0;
            g_lmapScene->moveSpeed = 0.0f;
            g_lmapScene->state++;
            g_lmapScene->stateTime = 0;
        }
        break;

    case 12:
        lmapSetSceneId(22);
        break;

    case 90:
        scene->state++;
        scene->stateTime = 0;
        break;

    case 91:
        mapDestroyOverlayModel();
        g_lmapScene->state++;
        g_lmapScene->stateTime = 0;
        break;

    case 92:
        scene->stateTime++;
        if (scene->stateTime > 3) {
            lmapSetSceneId(1);
        }
        break;
    }

    FUN_002804ec(&g_lmapScene->pose.targetPosition.x);
    mapSelectContainingRegions(g_lmapScene->pose.position.x, g_lmapScene->pose.position.z);
}

} /* extern "C" */
