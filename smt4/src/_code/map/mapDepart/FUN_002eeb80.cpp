#include "shard/W5_W5Match7_SceneState.h"

/* The depart sequence's own state. */
struct DepartSequence {
    s8 started;
    s8 finished;       /* the sequence has finished loading */
    s8 overlayShown;   /* the debug overlay was shown by the sequence */
    s8 unk03;
    s32 frame;         /* frames since the sequence started */
};


extern "C" {
extern u8 *g_mapDepartWork;
extern DepartSequence DAT_00447518;

void mikadoSetCameraFlag80(void);
s32 mikadoIsCameraNotState7(void);
void debugOverlaySetShown(s32 shown);
void FUN_00273f90(void);
void FUN_00273fc0(void);
void FUN_00274798(void);
void FUN_00274fac(void);
void FUN_0027522c(void);
void FUN_00275364(void);
void FUN_00275714(void);
void FUN_002757a8(void);
void FUN_0027581c(void);
void FUN_002758d8(void);
void FUN_002759bc(void);
void mapDepartSyncModelVisibility(void);
void FUN_00275bc8(void);
void FUN_00275be8(s32 arg);
void FUN_00275dc4(void);
void mapUpdatePerFrame(void);
void mapEntryTriggerForScene(u32 scene);
void frameTexResetFlags(void);
void FUN_00280ac0(s32 arg);
void FUN_00294834(s32 r0, s32 g0, s32 b0, s32 r1, s32 g1, s32 b1, s32 r2, s32 g2, s32 b2, s32 r3, s32 g3, s32 b3,
                  f32 f0, f32 f1, f32 f2, f32 f3, f32 f4, f32 f5, f32 f6, f32 f7, f32 f8);
void FUN_0028a420(s32 mode, s32 option);
void FUN_0029ae60(u32 arg);
s32 FUN_002b8694(void);
s32 NaviMain_IsCreated(void);

/* Per-frame driver of the map depart sequence. Returns 1 on the frame the sequence ends. */
u32 FUN_002eeb80(void)
{
    if (g_gameState.controllerFlags.secondary != 0 && DAT_00447518.overlayShown == 0) {
        DAT_00447518.overlayShown = 1;
        debugOverlaySetShown(1);
    }
    if (g_gameState.resume.mode == 3) {
        if (DAT_00447518.started == 0) {
            mikadoSetCameraFlag80();
            DAT_00447518.started = 1;
        }
        if (mikadoIsCameraNotState7() == 0)
            return 0;
        DAT_00447518.started = 0;
        if (DAT_00447518.overlayShown != 0) {
            debugOverlaySetShown(0);
            DAT_00447518.overlayShown = 0;
        }
        return 1;
    }
    if (DAT_00447518.started == 0) {
        DAT_00447518.frame = 0;
        DAT_00447518.started = 1;
        DAT_00447518.finished = 0;
    }
    if (DAT_00447518.finished != 0) {
        g_gameState.controllerFlags.secondary = 0;
        FUN_00275be8(0);
        DAT_00447518.started = 0;
        DAT_00447518.finished = 0;
        if (DAT_00447518.overlayShown != 0) {
            debugOverlaySetShown(0);
            DAT_00447518.overlayShown = 0;
        }
        return 1;
    }
    if (DAT_00447518.frame == 0) {
        g_lmapScene->targetPosition = g_lmapScene->position;
    } else {
        if (DAT_00447518.frame == 10) {
            g_gameState.depart.mapLoadActive = 1;
            frameTexResetFlags();
            FUN_00275dc4();
            FUN_00275be8(1);
            FUN_00275bc8();
        }
        if (DAT_00447518.frame == 0xB) {
            g_gameState.controllerFlags.loading = 1;
            g_mapDepartWork[10] = 0;
            mapDepartSyncModelVisibility();
            frameTexResetFlags();
        }
    }
    if (DAT_00447518.frame < 20) {
        DAT_00447518.frame++;
    }
    if (DAT_00447518.frame < 100) {
        if (DAT_00447518.frame > 12 && NaviMain_IsCreated() != 0) {
            FUN_002759bc();
            FUN_002758d8();
            FUN_0027581c();
            FUN_0028a420(0, 0);
            FUN_00294834(200, 200, 200, 130, 130, 130, 30, 30, 30, 150, 150, 150, 90.0f, -0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 30.0f, 1.5f);
            DAT_00447518.frame = 100;
            g_gameState.controllerFlags.secondary = 1;
            mapUpdatePerFrame();
        }
    } else if (FUN_002b8694() == 0) {
        g_gameState.depart.mapLoadActive = 0;
        FUN_00280ac0(1);
        g_gameState.controllerFlags.loading = 0;
        FUN_002757a8();
        FUN_00275714();
        mapEntryTriggerForScene(g_gameState.submode);
        FUN_00275364();
        FUN_0027522c();
        FUN_00274fac();
        FUN_00274798();
        g_mapDepartWork[10] = 1;
        mapDepartSyncModelVisibility();
        FUN_0029ae60(((u32 *)g_lmapScene)[0x194 / 4]);
        FUN_00273fc0();
        FUN_00273f90();
        DAT_00447518.finished = 1;
        return 0;
    }
    return 0;
}

} /* extern "C" */
