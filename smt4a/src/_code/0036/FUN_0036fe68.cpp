#include "shard/W5_W5Match7_SceneState.h"
#include "map/LmapGlobals.h"
#include "map/mapDepart.h"
#include "game/GameStateA.h"


extern "C" {
extern u8 *g_mapDepartWork;
extern MapDepartSequence g_mapDepartSequence;

void mikadoSetCameraFlag80(void);
s32 mikadoIsCameraNotState7(void);
void debugOverlaySetShown(s32 shown);
void FUN_0023a52c(void);
void FUN_00296530(void);
void FUN_00234b30(void);
void FUN_002737a8(void);
void FUN_0023534c(void);
void FUN_00297c3c(void);
void soundActorQueueStartPending(void);
void sub68OwnerCall3(void);
void resourceTableReleaseHandles(void);
void mapRecordResumePoint(void);
void frameTexturesRelease(void);
void FUN_002235f4(void);
void naviMainEnterState4IfActive(void);
void frameTransitionSetMode(s32 arg);
void objectE0ResetFlags1040(void);
void FUN_0037a078(void);
void mapEnvironmentSelectPreset(s32 scene);
void FUN_002c2610(void);
void frameTexConfigureCaptureTextures(s32 arg);
void FUN_002c3398(s32 mode, s32 option);
void FUN_0031416c(s32 r0, s32 g0, s32 b0, s32 r1, s32 g1, s32 b1, s32 r2, s32 g2, s32 b2, s32 r3, s32 g3, s32 b3,
                  f32 f0, f32 f1, f32 f2, f32 f3, f32 f4, f32 f5, f32 f6, f32 f7, f32 f8);
void linkHolderClearFlag(u32 arg);
s32 campIsState85(void);
s32 naviMainIsActive(void);

/* Per-frame driver of the map depart sequence. Returns 1 on the frame the sequence ends. */
u32 FUN_0036fe68(void)
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
        frameTransitionSetMode(0);
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
            g_gameState.mapLoadActive = 1;
            FUN_002c2610();
            objectE0ResetFlags1040();
            frameTransitionSetMode(1);
            naviMainEnterState4IfActive();
        }
        if (g_mapDepartSequence.frame == 0xB) {
            g_gameState.loading = 1;
            g_mapDepartWork[10] = 0;
            FUN_002235f4();
            FUN_002c2610();
        }
    }
    if (g_mapDepartSequence.frame < 20) {
        g_mapDepartSequence.frame++;
    }
    if (g_mapDepartSequence.frame < 100) {
        if (g_mapDepartSequence.frame > 12 && naviMainIsActive() != 0) {
            frameTexturesRelease();
            mapRecordResumePoint();
            resourceTableReleaseHandles();
            FUN_002c3398(0, 0);
            FUN_0031416c(200, 200, 200, 130, 130, 130, 30, 30, 30, 150, 150, 150, 90.0f, -0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 30.0f, 1.5f);
            g_mapDepartSequence.frame = 100;
            g_gameState.mapReady = 1;
            FUN_0037a078();
        }
    } else if (campIsState85() == 0) {
        g_gameState.mapLoadActive = 0;
        frameTexConfigureCaptureTextures(1);
        g_gameState.loading = 0;
        sub68OwnerCall3();
        soundActorQueueStartPending();
        mapEnvironmentSelectPreset(g_gameState.areaId);
        FUN_00297c3c();
        FUN_0023534c();
        FUN_002737a8();
        FUN_00234b30();
        g_mapDepartWork[10] = 1;
        FUN_002235f4();
        linkHolderClearFlag(((u32 *)g_lmapScene)[0x1A8 / 4]);
        FUN_00296530();
        FUN_0023a52c();
        g_mapDepartSequence.finished = 1;
        return 0;
    }
    return 0;
}

} /* extern "C" */
