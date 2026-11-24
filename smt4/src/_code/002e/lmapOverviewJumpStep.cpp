/* NON_MATCHING: 240 lines (shape 132): retail computes the jump step loading the landing point field by field
 * and the position as a block (here the other way round), loads the lifted sound position z first, keeps the
 * jump's vertical speed in s0 for the end test of state 52 and lays out the shared state++ tails differently.
 * Written in the form of the IDENTICAL sibling lmapOverviewClimbStep. */
#include "common.h"
#include "map/LmapPlayerModel.h"
#include "map/LmapGlobals.h"
#include "map/LmapViewGlobals.h"
#include "map/MapActionMarker.h"
#include "map/MapIfGlobals.h"
#include "map/MapVector.h"
#include "game/GameState.h"
#include "quest_center/qcMain.h"
#include "sys/RuntimeObjects.h"
#include "shard/W6_W6Match2_ScrollList.h"
#include "util/TrigF32.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"

extern "C" {

f32 mathPositionHeadingDegrees(MapVector from, MapVector to); // declcheck: local (as lmapIntroSceneStep: util/MathFunctions.h's distance takes six floats)
u32 table23FindRecordByKey(s32 category, s32 subtype, u32 variant);
s32 soundPlaySeUnpanned(u32 id);
void mapIfActivateRecord(s32 active, u32 record);
void mapIfReleaseSlot2(void);
void mapDestroySecondaryModel(void);
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

/* Per-frame step of the lmap scene at an overview point the player jumps down from: eases the player, shows
 * the action-down marker until the player confirms (then jumps towards a point 500 below the overview
 * position, fades the screen out and switches to scene 18) or cancels (then switches back to scene 1). */
void lmapOverviewJumpStep(void)
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
        /* Stand behind the overview position, facing it. */
        g_lmapScene->pose.targetHeading =
            mathPositionHeadingDegrees(scene->pose.targetPosition, g_gameState.overviewPosition);
        g_lmapScene->pose.targetPosition = g_gameState.overviewPosition;
        g_lmapScene->pose.targetPosition.x +=
            libm_sinf((g_lmapScene->pose.targetHeading + 180.0f) * 0.017453292f) * 110.0f;
        g_lmapScene->pose.targetPosition.z +=
            libm_cosf((g_lmapScene->pose.targetHeading + 180.0f) * 0.017453292f) * 110.0f;
        lmapCameraSetMode(10);
        g_mapCamera->contextMode = -1;
        buttonHelpSetPreset(219);
        mapIfActivateRecord(1, g_gameState.overviewRecord);
        {
            MapMarkerPosition marker;
            marker.x = g_gameState.overviewPosition.x;
            marker.y = g_gameState.overviewPosition.y;
            marker.z = g_gameState.overviewPosition.z;
            marker.x += libm_sinf(g_lmapScene->pose.targetHeading * 0.017453292f) * 20.0f;
            marker.y += 10.0f;
            marker.z += libm_cosf(g_lmapScene->pose.targetHeading * 0.017453292f) * 20.0f;
            marker.w = g_lmapScene->pose.targetHeading + 180.0f;
            mapIfSpawnDownAction(marker);
        }
        g_lmapScene->state++;
        g_lmapScene->stateTime = 0;
        break;

    case 1:
        scene->stateTime++;
        mapIfActivateRecord(1, g_gameState.overviewRecord);
        if (g_lmapScene->stateTime > 2) {
            g_lmapScene->moveMode = 29;
            g_lmapScene->moveSpeed = 2.0f;
            g_lmapScene->state++;
            g_lmapScene->stateTime = 0;
        }
        break;

    case 2:
        scene->stateTime++;
        mapIfActivateRecord(1, g_gameState.overviewRecord);
        if (inputConfirmPressed() != 0) {
            table23FindRecordByKey(g_gameState.argument, g_gameState.unk078, g_gameState.unk07C);
            g_lmapScene->jumpTarget.x = g_gameState.overviewPosition.x;
            g_lmapScene->jumpTarget.y = g_gameState.overviewPosition.y - 500.0f;
            g_lmapScene->jumpTarget.z = g_gameState.overviewPosition.z;
            g_lmapScene->jumpHeading = g_lmapScene->pose.targetHeading;
            g_lmapScene->state = 50;
            g_lmapScene->stateTime = 0;
        } else if (padIsButtonPressed(5) != 0 || inputIsQuestMenuPressed() != 0) {
            g_mapCamera->heading = g_lmapScene->pose.targetHeading;
            g_mapCamera->contextMode = 0;
            lmapCameraSetMode(0);
            g_lmapScene->moveMode = 0;
            g_lmapScene->moveSpeed = 5.0f;
            mapIfActivateRecord(0, g_gameState.overviewRecord);
            mapIfReleaseSlot2();
            g_lmapScene->state = 90;
            g_lmapScene->stateTime = 0;
        }
        break;

    case 50:
        /* Jump: the horizontal distance to the landing point is covered in 40 frames. */
        g_gameState.map.transitionCompleted = 0;
        g_mapCamera->unk00C = 2;
        scene->moveMode = 5;
        scene->moveSpeed = 3.0f;
        scene->jumpStep = mapVectorSub(scene->jumpTarget, scene->pose.position);
        mapVectorScale(&scene->jumpStep, &scene->jumpStep, 0.025f);
        g_lmapScene->jumpFrames = 0;
        g_lmapScene->state++;
        g_lmapScene->stateTime = 0;
        break;

    case 51:
        scene->stateTime++;
        if (scene->stateTime > 20) {
            FUN_0027fae4(scene->pose.targetPosition.x, scene->pose.targetPosition.y, scene->pose.targetPosition.z);
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
            SoundActorQueuePosition above = *(SoundActorQueuePosition *)&g_lmapScene->pose.position;
            above.x += libm_sinf(g_lmapScene->pose.heading * 0.017453292f) * 50.0f;
            above.z += libm_cosf(g_lmapScene->pose.heading * 0.017453292f) * 50.0f;
            above.y += 150.0f;
            soundActorStartOnFreeChannel(0x100023C + randBetween(0, 1), above);
            g_lmapScene->verticalSpeed = 8.0f;
            g_lmapScene->pose.position.y += g_lmapScene->verticalSpeed;
            g_lmapScene->state++;
            g_lmapScene->stateTime = 0;
        }
        break;

    case 52:
        scene->verticalSpeed -= 2.0f;
        scene->pose.position.y += scene->verticalSpeed;
        if (scene->jumpFrames < 40) {
            scene->pose.position.x += scene->jumpStep.x;
            scene->pose.position.z += scene->jumpStep.z;
            scene->jumpFrames++;
        }
        scene->stateTime++;
        if (scene->verticalSpeed > 0.0f) {
            scene->state++;
            scene->stateTime = 0;
        }
        break;

    case 53:
        scene->verticalSpeed -= 2.0f;
        scene->pose.position.y += scene->verticalSpeed;
        if (scene->jumpFrames < 40) {
            scene->pose.position.x += scene->jumpStep.x;
            scene->pose.position.z += scene->jumpStep.z;
            scene->jumpFrames++;
        }
        scene->stateTime++;
        if (scene->stateTime == 10) {
            soundPlaySeUnpanned(0x10000E7);
        }
        if (g_lmapScene->stateTime == 30) {
            slotSetRequest(0, 10, 255);
            slotSetRequest(1, 10, 255);
        }
        if (g_lmapScene->stateTime > 30 && screenFadesAllReady()) {
            g_lmapScene->state++;
            g_lmapScene->stateTime = 0;
        }
        break;

    case 54:
        mapIfReleaseSlot2();
        g_lmapScene->verticalSpeed = 0.0f;
        g_mapCamera->heading = g_lmapScene->pose.targetHeading;
        g_mapCamera->contextMode = 0;
        lmapCameraSetMode(0);
        g_lmapScene->state++;
        g_lmapScene->stateTime = 0;
        break;

    case 55:
        scene->stateTime++;
        mapDestroySecondaryModel();
        lmapSetSceneId(18);
        break;

    case 90:
        scene->state++;
        scene->stateTime = 0;
        break;

    case 91:
        mapDestroySecondaryModel();
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
