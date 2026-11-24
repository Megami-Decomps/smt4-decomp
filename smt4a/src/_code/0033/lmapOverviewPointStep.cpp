/* NON_MATCHING: 111 raw / 3 shape lines (from 511/469): every block, call and constant is retail's. Left: state 0's
 * closing state++ loads the state itself, where retail cross-jumps into state 10's load of it (one instruction), and
 * the code after it shifts by that word. */
#include "game/GameStateA.h"
#include "map/LmapGlobals.h"
#include "map/LmapViewGlobals.h"
#include "map/LmapAreaAnnounce.h"
#include "map/MapActionMarker.h"
#include "sys/RuntimeObjects.h"
#include "code/Code002e.h"

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
void FUN_00327ee8(f32 x, f32 z);

/* Steps the scene through the overview point's approach: walk up to the point and show its marker, wait for
 * confirm (states 10-13: announce the area and leave for scene state 20) or cancel (90-92: back to the map,
 * scene state 1); 100-102 leave after the slot request. Eases the position toward its target on the way. */
void lmapOverviewPointStep(void)
{
    u8 volume = soundVolumeSettingGet();
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
        g_gameState.transitionCompleted = 0;
        g_lmapView->unk00C = 1;
        g_lmapScene->moveMode = 21;
        g_lmapScene->moveSpeed = 5.0f;
        g_lmapScene->state++;
        g_lmapScene->stateTime = 0;
        break;
    case 11:
        /* announce the area: its sound at the player, the effect and the voice at the current volume */
        if (++g_lmapScene->stateTime == 10) {
            FUN_0033abd4(g_lmapScene->pose.position.x, g_lmapScene->pose.position.y, g_lmapScene->pose.position.z);
            lmapAnnounceArea(0, volume);
            FUN_002342b8();
            g_lmapScene->state++;
            g_lmapScene->stateTime = 0;
        }
        break;
    case 12:
        if (!mapIfHasSelection()) {
            mapIfReleaseSlot4();
            g_lmapView->heading = g_lmapScene->pose.targetHeading;
            g_lmapView->contextMode = 0;
            lmapCameraSetMode(0);
            g_lmapScene->state++;
            g_lmapScene->stateTime = 0;
        }
        break;
    case 13:
    case 102:
        mapIfReleaseResource();
        mapSetSceneState(20);
        g_lmapScene->state++;
        g_lmapScene->stateTime = 0;
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
    case 100:
        slotSetRequest(0, 10, 255);
        g_lmapScene->state++;
        g_lmapScene->stateTime = 0;
        break;
    case 101:
        if (pairedAvailabilityBothReady()) {
            g_lmapView->heading = g_lmapScene->pose.targetHeading;
            g_lmapView->contextMode = 0;
            lmapCameraSetMode(0);
            g_lmapScene->moveMode = 0;
            g_lmapScene->moveSpeed = 5.0f;
            mapIfApplyEntryRequest(0, g_gameState.overviewRecord);
            mapIfReleaseSlot4();
            g_lmapScene->state++;
            g_lmapScene->stateTime = 0;
        }
        break;
    }
    FUN_002e364c(&g_lmapScene->pose.targetPosition.x);
    FUN_00327ee8(g_lmapScene->pose.position.x, g_lmapScene->pose.position.z);
}

} /* extern "C" */
