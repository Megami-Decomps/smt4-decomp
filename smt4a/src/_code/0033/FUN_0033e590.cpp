#include "game/GameStateA.h"
#include "map/LmapGlobals.h"
#include "map/LmapViewGlobals.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "code/Code0014.h"
#include "map/MapActionMarker.h"
#include "sys/RuntimeObjects.h"
#include "code/Code002e.h"

extern "C" {

void sysPlaySe(u32 id);
u32 padButtonIsPressed(u32 button);
s32 FUN_004d0584(void);
s32 inputIsQuestMenuPressed(void);
void mapEaseSceneHeading(void);
void FUN_00303460(s32 mode);
void mapSetSceneState(s32 state);
u32 FUN_00233e10(u8 blocked, s32 index);
void mapIfShowActionMarker(MapMarkerPosition placement);
void mapIfReleaseSlot4(void);
void mapIfReleaseResource(void);
bool mapIfHasSelection(void);
void FUN_002342b8(void);
u32 FUN_002e364c(f32 *target);
void FUN_00327ee8(f32 x, f32 z);

f32 libm_sinf(f32 radians);
f32 libm_cosf(f32 radians);
void FUN_0033abd4(f32 x, f32 y, f32 z);
void FUN_00324e38(s32 variant);
u8 soundVolumeSettingGet(void);
void soundVolumeSettingSet(u8 volume);

/* The area announcement is emitted inline by the field map step. */
static __forceinline void lmapAnnounceArea(s32 part, u8 volume)
{
    switch (g_gameState.selectedKind) {
    case 0:
        soundActorStartOnFreeChannel(0x10002c4 + part, soundActorPositionFromArray(&g_lmapScene->pose.position.x));
        break;
    case 1:
        soundActorStartOnFreeChannel(0x10002c6 + part, soundActorPositionFromArray(&g_lmapScene->pose.position.x));
        break;
    case 2:
        soundActorStartOnFreeChannel(0x10002c8 + part, soundActorPositionFromArray(&g_lmapScene->pose.position.x));
        break;
    case 3:
        soundActorStartOnFreeChannel(0x10002ca + part, soundActorPositionFromArray(&g_lmapScene->pose.position.x));
        break;
    case 4:
        soundActorStartOnFreeChannel(0x10002cc + part, soundActorPositionFromArray(&g_lmapScene->pose.position.x));
        break;
    case 5:
        soundActorStartOnFreeChannel(0x10002d9 + part, soundActorPositionFromArray(&g_lmapScene->pose.position.x));
        break;
    }
    FUN_00324e38(-1);
    libm_sinf(g_lmapScene->pose.heading * 0.017453292f);
    libm_cosf(g_lmapScene->pose.heading * 0.017453292f);
    soundVolumeSettingSet(FUN_0014af98());
    sysPlayVoice(0x10002e5 + part);
    soundVolumeSettingSet(volume);
}

/* Steps the scene through the overview point's approach: walk up to the point and show its marker, wait for
 * confirm (states 10-13: announce the area and leave for scene state 20) or cancel (90-92: back to the map,
 * scene state 1); 100-102 leave after the slot request. Eases the position toward its target on the way. */
void FUN_0033e590(void)
{
    u8 volume = soundVolumeSettingGet();
    if (g_lmapScene->state < 10) {
        mapEaseSceneHeading();
        LmapSceneA *scene = g_lmapScene;
        scene->pose.position.x += (scene->pose.targetPosition.x - scene->pose.position.x) * (1.0f / 3.0f);
        scene->pose.position.y += (scene->pose.targetPosition.y - scene->pose.position.y) * (1.0f / 6.0f);
        scene->pose.position.z += (scene->pose.targetPosition.z - scene->pose.position.z) * (1.0f / 3.0f);
    }

    LmapSceneA *scene = g_lmapScene;
    s32 oldState;
    switch (scene->state) {
    case 0: {
        /* walk to a point 25 units ahead of the overview point */
        g_lmapScene->moveMode = 0;
        g_lmapScene->moveSpeed = 3.0f;
        g_lmapScene->unk06C = 0;
        g_lmapScene->pose.targetPosition = g_gameState.overviewPosition;
        g_lmapScene->pose.targetPosition.x += libm_sinf(g_gameState.pointHeading * 0.017453292f) * 25.0f;
        g_lmapScene->pose.targetPosition.z += libm_cosf(g_gameState.pointHeading * 0.017453292f) * 25.0f;
        g_lmapScene->pose.targetHeading = g_gameState.overviewHeading;
        FUN_00303460(13);
        g_lmapView->contextMode = 1;
        sysPlaySe(220);
        FUN_00233e10(1, g_gameState.overviewRecord);
        MapMarkerPosition marker = { g_gameState.overviewPosition.x, g_gameState.overviewPosition.y,
                                     g_gameState.overviewPosition.z, g_gameState.pointHeading };
        mapIfShowActionMarker(marker);
        scene = g_lmapScene;
        goto readAdvance;
    }
    case 1:
        g_lmapScene->stateTime++;
        FUN_00233e10(1, g_gameState.overviewRecord);
        if (g_lmapScene->stateTime > 2) {
            g_lmapScene->moveMode = 28;
            g_lmapScene->moveSpeed = 2.0f;
            g_lmapScene->state++;
            g_lmapScene->stateTime = 0;
        }
        break;
    case 2:
        g_lmapScene->stateTime++;
        FUN_00233e10(1, g_gameState.overviewRecord);
        if (FUN_004d0584()) {
            g_lmapScene->state = 10;
            g_lmapScene->stateTime = 0;
        } else if (padButtonIsPressed(6) || inputIsQuestMenuPressed()) {
            g_lmapView->heading = g_lmapScene->pose.targetHeading;
            g_lmapView->contextMode = 0;
            FUN_00303460(0);
            g_lmapScene->moveMode = 0;
            g_lmapScene->moveSpeed = 5.0f;
            FUN_00233e10(0, g_gameState.overviewRecord);
            mapIfReleaseSlot4();
            g_lmapScene->state = 90;
            g_lmapScene->stateTime = 0;
        }
        break;
    case 10: {
        g_gameState.transitionCompleted = 0;
        g_lmapView->unk00C = 1;
        scene->moveMode = 21;
        scene->moveSpeed = 5.0f;
    }
    readAdvance:
        oldState = scene->state;
        goto commitAdvance;
    case 11:
        /* announce the area: its sound at the player, the effect and the voice at the current volume */
        if (++g_lmapScene->stateTime == 10) {
            FUN_0033abd4(g_lmapScene->pose.position.x, g_lmapScene->pose.position.y, g_lmapScene->pose.position.z);
            lmapAnnounceArea(0, volume);
            FUN_002342b8();
            scene = g_lmapScene;
            const s32 currentState = scene->state;
            scene->state = currentState + 1;
            scene->stateTime = 0;
        }
        break;
    case 12:
        if (!mapIfHasSelection()) {
            mapIfReleaseSlot4();
            g_lmapView->heading = g_lmapScene->pose.targetHeading;
            g_lmapView->contextMode = 0;
            FUN_00303460(0);
            g_lmapScene->state++;
            g_lmapScene->stateTime = 0;
        }
        break;
    case 13:
    case 102:
        mapIfReleaseResource();
        mapSetSceneState(20);
        scene = g_lmapScene;
        oldState = scene->state;
    commitAdvance: {
        scene->state = oldState + 1;
        scene->stateTime = 0;
        break;
    }
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
            FUN_00303460(0);
            g_lmapScene->moveMode = 0;
            g_lmapScene->moveSpeed = 5.0f;
            FUN_00233e10(0, g_gameState.overviewRecord);
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
