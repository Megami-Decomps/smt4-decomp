/* NON_MATCHING: 182 lines (shape 88): retail keeps the departure sound of selected kind 0 as its own call and
 * places kinds 3 and 4 after the slot requests, and loads the lifted sound position z first; the saved registers
 * for g_mapCamera and the group/flag constants differ. Written in the form of the IDENTICAL sibling lmapOverviewClimbStep. */
#include "common.h"
#include "map/LmapPlayerModel.h"
#include "map/LmapGlobals.h"
#include "map/LmapViewGlobals.h"
#include "map/MapActionMarker.h"
#include "map/MapVector.h"
#include "game/GameState.h"
#include "quest_center/qcMain.h"
#include "camp/CampMenuEntry.h"
#include "sys/RuntimeObjects.h"
#include "shard/W6_W6Match2_ScrollList.h"
#include "util/TrigF32.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"

extern "C" {

void mapIfActivateRecord(s32 active, u32 record);
void mapIfShowActionMarker(MapMarkerPosition position);
void mapIfReleaseSlot3(void);
bool mapIfHasSelection(void);
void mapDestroyOverlayModel(void);
void mapInterfaceSetStateTwo(void);
void lmapSetSceneId(u32 scene);
void lmapCameraSetMode(s32 mode);
void mapSelectContainingRegions(f32 x, f32 z);
void FUN_002804ec(f32 *position);
void mapEaseSceneHeading(void);
void FUN_0027fae4(f32 x, f32 y, f32 z);
s32 randBetween(s32 minimum, s32 maximum);
s32 inputIsQuestMenuPressed(void);
s32 inputConfirmPressed(void);
s32 padIsButtonPressed(u32 button);

/* Per-frame step of the lmap scene at an overview point that leads down: eases the player, shows the
 * action marker until the player confirms (then plays the departure effect and sounds and switches to
 * scene 20) or cancels (then switches back to scene 1). In group 0x3303001 with flag 0x292 set the
 * departure fades the screen out through slot requests instead of handing over to the map interface. */
void lmapOverviewDepartStep(void)
{
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
            g_lmapScene->state = 10;
            g_lmapScene->stateTime = 0;
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
        g_gameState.map.transitionCompleted = 0;
        g_mapCamera->unk00C = 1;
        scene->moveMode = 21;
        scene->moveSpeed = 5.0f;
        scene->state++;
        scene->stateTime = 0;
        break;

    case 11:
        scene->stateTime++;
        if (scene->stateTime == 10) {
            FUN_0027fae4(scene->pose.position.x, scene->pose.position.y, scene->pose.position.z);
            switch (g_gameState.selectedKind) {
            case 0:
                soundActorStartOnFreeChannel(0x100021B, *(SoundActorQueuePosition *)&g_lmapScene->pose.position);
                break;
            case 1:
                soundActorStartOnFreeChannel(0x100021D, *(SoundActorQueuePosition *)&g_lmapScene->pose.position);
                break;
            case 2:
                soundActorStartOnFreeChannel(0x100021F, *(SoundActorQueuePosition *)&g_lmapScene->pose.position);
                break;
            case 3:
                soundActorStartOnFreeChannel(0x1000221, *(SoundActorQueuePosition *)&g_lmapScene->pose.position);
                break;
            case 4:
                soundActorStartOnFreeChannel(0x1000223, *(SoundActorQueuePosition *)&g_lmapScene->pose.position);
                break;
            }
            mapDepartSpawnPlayerEffect(-1);
            SoundActorQueuePosition above;
            above.x = g_lmapScene->pose.position.x;
            above.y = g_lmapScene->pose.position.y;
            above.z = g_lmapScene->pose.position.z;
            above.x += libm_sinf(g_lmapScene->pose.heading * 0.017453292f) * 50.0f;
            above.z += libm_cosf(g_lmapScene->pose.heading * 0.017453292f) * 50.0f;
            above.y += 150.0f;
            soundActorStartOnFreeChannel(0x100023C + randBetween(0, 1), above);
            if (g_gameState.activeGroupId == 0x3303001 && gameFlagIsSet(0x292)) {
                slotSetRequest(0, 15, 255);
                slotSetRequest(1, 15, 255);
            } else {
                mapInterfaceSetStateTwo();
            }
            g_lmapScene->state++;
            g_lmapScene->stateTime = 0;
        }
        break;

    case 12:
        if (g_gameState.activeGroupId == 0x3303001 && gameFlagIsSet(0x292)) {
            if (!screenFadesAllReady()) {
                break;
            }
        } else if (mapIfHasSelection()) {
            break;
        }
        mapIfReleaseSlot3();
        g_mapCamera->heading = g_lmapScene->pose.targetHeading;
        g_mapCamera->contextMode = 0;
        lmapCameraSetMode(0);
        g_lmapScene->state++;
        g_lmapScene->stateTime = 0;
        break;

    case 13:
        mapDestroyOverlayModel();
        lmapSetSceneId(20);
        g_lmapScene->state++;
        g_lmapScene->stateTime = 0;
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

    case 100:
        slotSetRequest(0, 10, 255);
        g_lmapScene->state++;
        g_lmapScene->stateTime = 0;
        break;

    case 101:
        if (screenFadesAllReady()) {
            g_mapCamera->heading = g_lmapScene->pose.targetHeading;
            g_mapCamera->contextMode = 0;
            lmapCameraSetMode(0);
            g_lmapScene->moveMode = 0;
            g_lmapScene->moveSpeed = 5.0f;
            mapIfActivateRecord(0, g_gameState.overviewRecord);
            mapIfReleaseSlot3();
            g_lmapScene->state++;
            g_lmapScene->stateTime = 0;
        }
        break;
    case 102:
        mapDestroyOverlayModel();
        lmapSetSceneId(20);
        g_lmapScene->state++;
        g_lmapScene->stateTime = 0;
        break;
    }

    FUN_002804ec(&g_lmapScene->pose.targetPosition.x);
    mapSelectContainingRegions(g_lmapScene->pose.position.x, g_lmapScene->pose.position.z);
}

} /* extern "C" */
