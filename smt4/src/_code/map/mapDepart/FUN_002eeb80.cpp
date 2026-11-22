#include "shard/W5_W5Match7_SceneState.h"
#include "map/LmapGlobals.h"
#include "map/mapDepart.h"
#include "game/GameState.h"



extern "C" {
extern u8 *g_mapDepartWork;
extern MapDepartSequence g_mapDepartSequence;

void mikadoSetCameraFlag80(void);
s32 mikadoIsCameraNotState7(void);
void debugOverlaySetShown(s32 shown);
void FUN_00273f90(void);
void lmapUpdateSceneModels(void);
void FUN_00274798(void);
void mapGimicUpdate(void);
void FUN_0027522c(void);
void FUN_00275364(void);
void soundActorQueueStartPending(void);
void FUN_002757a8(void);
void resourceTableReleaseHandles(void);
void FUN_002758d8(void);
void FUN_002759bc(void);
void mapDepartSyncModelVisibility(void);
void FUN_00275bc8(void);
void frameTexCampSetMode(s32 arg);
void FUN_00275dc4(void);
void mapUpdatePerFrame(void);
void mapEntryTriggerForScene(u32 scene);
void frameTexResetFlags(void);
void frameTexConfigureCaptureTextures(s32 arg);
void FUN_00294834(s32 r0, s32 g0, s32 b0, s32 r1, s32 g1, s32 b1, s32 r2, s32 g2, s32 b2, s32 r3, s32 g3, s32 b3,
                  f32 f0, f32 f1, f32 f2, f32 f3, f32 f4, f32 f5, f32 f6, f32 f7, f32 f8);
void FUN_0028a420(s32 mode, s32 option);
void linkHolderClearFlagGroup(u32 arg);
s32 FUN_002b8694(void);
s32 NaviMain_IsCreated(void);

/* Per-frame driver of the map depart sequence. Returns 1 on the frame the sequence ends. */
u32 FUN_002eeb80(void)
{
    if (g_gameState.mapReady != 0 && g_mapDepartSequence.overlayShown == 0) {
        g_mapDepartSequence.overlayShown = 1;
        debugOverlaySetShown(1);
    }
    if (g_gameState.resumeMode == 3) {
        if (g_mapDepartSequence.started == 0) {
            mikadoSetCameraFlag80();
            g_mapDepartSequence.started = 1;
        }
        if (mikadoIsCameraNotState7() == 0)
            return 0;
        g_mapDepartSequence.started = 0;
        if (g_mapDepartSequence.overlayShown != 0) {
            debugOverlaySetShown(0);
            g_mapDepartSequence.overlayShown = 0;
        }
        return 1;
    }
    if (g_mapDepartSequence.started == 0) {
        g_mapDepartSequence.frame = 0;
        g_mapDepartSequence.started = 1;
        g_mapDepartSequence.finished = 0;
    }
    if (g_mapDepartSequence.finished != 0) {
        g_gameState.mapReady = 0;
        frameTexCampSetMode(0);
        g_mapDepartSequence.started = 0;
        g_mapDepartSequence.finished = 0;
        if (g_mapDepartSequence.overlayShown != 0) {
            debugOverlaySetShown(0);
            g_mapDepartSequence.overlayShown = 0;
        }
        return 1;
    }
    if (g_mapDepartSequence.frame == 0) {
        g_lmapScene->pose.targetPosition = g_lmapScene->pose.position;
    } else {
        if (g_mapDepartSequence.frame == 10) {
            g_gameState.map.mapLoadActive = 1;
            frameTexResetFlags();
            FUN_00275dc4();
            frameTexCampSetMode(1);
            FUN_00275bc8();
        }
        if (g_mapDepartSequence.frame == 0xB) {
            g_gameState.loading = 1;
            g_mapDepartWork[10] = 0;
            mapDepartSyncModelVisibility();
            frameTexResetFlags();
        }
    }
    if (g_mapDepartSequence.frame < 20) {
        g_mapDepartSequence.frame++;
    }
    if (g_mapDepartSequence.frame < 100) {
        if (g_mapDepartSequence.frame > 12 && NaviMain_IsCreated() != 0) {
            FUN_002759bc();
            FUN_002758d8();
            resourceTableReleaseHandles();
            FUN_0028a420(0, 0);
            FUN_00294834(200, 200, 200, 130, 130, 130, 30, 30, 30, 150, 150, 150, 90.0f, -0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 30.0f, 1.5f);
            g_mapDepartSequence.frame = 100;
            g_gameState.mapReady = 1;
            mapUpdatePerFrame();
        }
    } else if (FUN_002b8694() == 0) {
        g_gameState.map.mapLoadActive = 0;
        frameTexConfigureCaptureTextures(1);
        g_gameState.loading = 0;
        FUN_002757a8();
        soundActorQueueStartPending();
        mapEntryTriggerForScene(g_gameState.areaId);
        FUN_00275364();
        FUN_0027522c();
        mapGimicUpdate();
        FUN_00274798();
        g_mapDepartWork[10] = 1;
        mapDepartSyncModelVisibility();
        linkHolderClearFlagGroup(((u32 *)g_lmapScene)[0x194 / 4]);
        lmapUpdateSceneModels();
        FUN_00273f90();
        g_mapDepartSequence.finished = 1;
        return 0;
    }
    return 0;
}

} /* extern "C" */
