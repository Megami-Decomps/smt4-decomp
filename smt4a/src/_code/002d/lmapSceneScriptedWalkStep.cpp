/* NON_MATCHING: 119 lines (69 by shape): the steps, calls, constants and frame are retail's. Retail loads 0.0f for
 * the move speed at entry with 5.0f and the destination (before the switch here; a `speed` local scores worse), copies
 * the target's x and z into the previous position through core registers and loads the position's x/y as a pair in
 * the easing block, and in step 5 keeps the new z in s1 and -95 in s2 (single stores, a paired store here). */
#include "map/LmapGlobals.h"
#include "map/LmapViewGlobals.h"
#include "game/GameStateA.h"
#include "util/TrigF32.h"
#include "util/MathFunctions.h"
#include "code/Code0014.h"
#include "code/Code0015.h"
#include "AsdSDK/Source/Util/AsdListHelpers_Shard003E.h"
#include "AsdSDK/Source/Util/AsdListHelpers_Smt4a.h"

#define DEGREES_TO_RADIANS 0.017453292f

extern "C" {

void mapSetSceneState(u32 id);
void lmapCameraSetMode(s32 mode);
void FUN_002e364c(MapVector *position);
u32 mapResolveCollisionSphere(f32 *position, f32 *previous, s32 shortReach);
void naviMainSetFlagsAndActivate(s32 firstGroup, s32 firstBit, s32 secondGroup, s32 secondBit, s32 thirdGroup,
                                 s32 thirdBit);
u32 FUN_001628c0(const char *name, s32 kind, u8 flags, u8 priority, f32 leftGain, f32 rightGain);
void linkHolderClearFlag(LinkHolder *holder);

/* Runs one frame of a scripted field-map scene: the player walks toward a point with voice line I001025, is cut
 * to a second spot and walks on from there, the navigator gets entry 0x86, and the player is moved to the scene's
 * end point before control returns to the map. */
void lmapSceneScriptedWalkStep(void)
{
    MapVector destination;  /* the point the first walk heads for */
    destination.x = -7.0f;
    destination.y = 770.0f;
    destination.z = 2307.0f;

    /* Up to step 4 the position eases toward its target, which is then dropped onto the ground. */
    if (g_lmapScene->state < 5) {
        LmapSceneA *scene = g_lmapScene;
        MapVector target = scene->pose.targetPosition;
        scene->pose.previousPosition = target;
        scene->pose.position.z += (target.z - scene->pose.position.z) * (1.0f / 3.0f);
        scene->pose.position.x += (target.x - scene->pose.position.x) * (1.0f / 3.0f);
        scene->pose.position.y += (target.y - scene->pose.position.y) * (1.0f / 6.0f);
        if (scene->state != 2) {
            scene->pose.targetPosition.y = target.y - 5.0f;
            mapResolveCollisionSphere(&scene->pose.targetPosition.x, &scene->pose.previousPosition.x, 0);
            g_lmapScene->pose.targetPosition = g_lmapScene->pose.previousPosition;
        }
    }
    FUN_002e364c(&g_lmapScene->pose.targetPosition);

    LmapSceneA *scene = g_lmapScene;
    switch (scene->state) {
    case 0:
        scene->moveMode = 34;
        scene->moveSpeed = 0.0f;
        scene->state = 1;
        scene->stateTime = 0;
        scene->pose.targetHeading = 80.0f;
        scene->pose.heading = 80.0f;
        g_gameState.unk452[0] = 1;
        break;

    case 1:
        /* Two frames up, the voice line, then 21 frames toward the destination. */
        if (scene->stateTime < 2) {
            scene->pose.targetPosition.y += 5.0f;
        } else {
            if (scene->stateTime == 2) {
                FUN_001628c0("I001025", messageVoiceBankGet(), messageVoiceFlagsGet(), 1, 0.707f, 0.707f);
                lmapCameraSetMode(18);
            }
            scene = g_lmapScene;
            if (scene->stateTime >= 2) {
                g_lmapScene->pose.targetPosition.x +=
                    libm_sinf(mathPositionHeadingDegrees(scene->pose.position, destination) * DEGREES_TO_RADIANS) *
                    20.0f;
                g_lmapScene->pose.targetPosition.z +=
                    libm_cosf(mathPositionHeadingDegrees(g_lmapScene->pose.position, destination) * DEGREES_TO_RADIANS) *
                    20.0f;
                if (g_lmapScene->stateTime > 22) {
                    /* The cut: the player reappears at the second spot, 500 units back along its heading. */
                    scene = g_lmapScene;
                    scene->state++;
                    scene->stateTime = 0;
                    scene->pose.position.x = -652.0f;
                    scene->pose.position.z = 2129.0f;
                    scene->pose.position.y = 893.0f;
                    scene->pose.targetPosition.x = -652.0f;
                    scene->pose.targetPosition.y = 893.0f;
                    scene->pose.targetPosition.z = 2129.0f;
                    linkHolderSetFlag((LinkHolder *)scene->playerModel);
                    mapResolveCollisionSphere(&g_lmapScene->pose.targetPosition.x, &g_lmapScene->pose.previousPosition.x, 0);
                    g_lmapScene->pose.targetPosition = g_lmapScene->pose.previousPosition;
                    g_lmapView->flagB4 = 0;
                    lmapCameraSetMode(19);
                    g_lmapScene->pose.targetPosition.x +=
                        libm_sinf((g_lmapScene->pose.targetHeading + 180.0f) * DEGREES_TO_RADIANS) * 500.0f;
                    g_lmapScene->pose.targetPosition.z +=
                        libm_cosf((g_lmapScene->pose.targetHeading + 180.0f) * DEGREES_TO_RADIANS) * 500.0f;
                }
            }
        }
        g_lmapScene->stateTime++;
        break;

    case 2:
        scene->stateTime++;
        if (scene->stateTime > 20) {
            scene->state = 3;
            scene->stateTime = 0;
            linkHolderClearFlag((LinkHolder *)scene->playerModel);
            scene = g_lmapScene;
            scene->pose.position.x = -902.0f;
            scene->pose.position.z = 2229.0f;
            scene->pose.position.y = 923.0f;
            scene->pose.targetPosition.x = -902.0f;
            scene->pose.targetPosition.y = 923.0f;
            scene->pose.targetPosition.z = 2229.0f;
            mapResolveCollisionSphere(&scene->pose.targetPosition.x, &scene->pose.previousPosition.x, 0);
            g_lmapScene->pose.targetPosition = g_lmapScene->pose.previousPosition;
        }
        break;

    case 3:
        /* 41 frames along the heading. */
        scene->stateTime++;
        g_lmapScene->pose.targetPosition.x += libm_sinf(scene->pose.targetHeading * DEGREES_TO_RADIANS) * 22.5f;
        g_lmapScene->pose.targetPosition.z +=
            libm_cosf(g_lmapScene->pose.targetHeading * DEGREES_TO_RADIANS) * 22.5f;
        if (g_lmapScene->stateTime > 40) {
            g_lmapScene->state++;
            g_lmapScene->stateTime = 0;
            lmapCameraSetMode(20);
        }
        break;

    case 4:
        scene->moveMode = 35;
        scene->moveSpeed = 0.0f;
        scene->state = 5;
        scene->stateTime = 0;
        naviMainSetFlagsAndActivate(0x86, 0, 0, 0, 0, 0);
        g_gameState.currentObjectId = 0x86;
        break;

    case 5:
        /* The end point: 100 units along the heading, at height -95. */
        g_lmapScene->pose.position.x += libm_sinf(scene->pose.targetHeading * DEGREES_TO_RADIANS) * 100.0f;
        g_lmapScene->pose.position.z += libm_cosf(g_lmapScene->pose.targetHeading * DEGREES_TO_RADIANS) * 100.0f;
        scene = g_lmapScene;
        scene->pose.position.y = -95.0f;
        scene->pose.targetPosition.x = scene->pose.position.x;
        scene->pose.targetPosition.y = -95.0f;
        scene->pose.targetPosition.z = scene->pose.position.z;
        mapResolveCollisionSphere(&scene->pose.targetPosition.x, &scene->pose.previousPosition.x, 0);
        scene = g_lmapScene;
        scene->stateTime = 0;
        scene->pose.targetPosition = scene->pose.previousPosition;
        scene->pose.targetHeading = 80.0f;
        scene->state++;
        break;

    case 6:
        if (linkHolderCheckFirst((LinkHolder *)scene->playerModel)) {
            g_lmapScene->moveMode = 36;
            g_lmapScene->moveSpeed = 0.0f;
            g_lmapScene->state++;
            g_lmapScene->stateTime = 0;
            lmapCameraSetMode(21);
        }
        break;

    case 7:
        if (linkHolderCheckFirst((LinkHolder *)scene->playerModel)) {
            g_lmapScene->unk06C = 0;
            g_gameState.unk452[0] = 0;
            mapSetSceneState(1);
            lmapCameraSetMode(0);
        }
        break;
    }
}

} /* extern "C" */
