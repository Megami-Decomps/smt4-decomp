/* NON_MATCHING: readable rebuild of the map-depart load sequence; armcc here keeps the frame counter and the scene pointer in different registers across the staged calls (retail reloads DAT_005806b4.frame between the stages). */
#include "shard/W5_W5Match7_SceneState.h"

/* The depart sequence's own state. */
struct DepartSequence {
    s8 started;
    s8 finished;       /* the sequence has finished loading */
    s8 overlayShown;   /* the debug overlay was shown by the sequence */
    s8 unk03;
    s32 frame;         /* frames since the sequence started */
};

/* Map flags shared with the rest of the map code. */
struct DepartFlags {
    u32 scene;
    u8 unk04[0xC];
    s32 mode;
    u8 unk14[0xB];
    u8 loading;
    s8 ready;
};

extern "C" {
extern u8 *g_mapDepartWork;
extern DepartSequence DAT_005806b4;
extern DepartFlags DAT_005f1600;
extern u8 DAT_005f185c;

void mikadoSetCameraFlag80(void);
s32 mikadoIsCameraNotState7(void);
void debugOverlaySetShown(s32 shown);
void FUN_0023a52c(void);
void FUN_00296530(void);
void FUN_00234b30(void);
void FUN_002737a8(void);
void FUN_0023534c(void);
void FUN_00297c3c(void);
void FUN_002b9520(void);
void sub68OwnerCall3(void);
void FUN_00249a08(void);
void mapRecordResumePoint(void);
void FUN_002c2358(void);
void FUN_002235f4(void);
void FUN_00379be8(void);
void frameTransitionSetMode(s32 arg);
void objectE0ResetFlags1040(void);
void FUN_0037a078(void);
void mapEnvironmentSelectPreset(u32 scene);
void FUN_002c2610(void);
void FUN_002c23cc(s32 arg);
void FUN_002c3398(s32 arg);
void FUN_0031416c(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void linkHolderClearFlag(u32 arg);
s32 campIsState85(void);
s32 naviMainIsActive(void);

/* Per-frame driver of the map depart sequence. Returns 1 on the frame the sequence ends. */
u32 FUN_0036fe68(void)
{
    if (DAT_005f1600.ready != 0 && DAT_005806b4.overlayShown == 0) {
        DAT_005806b4.overlayShown = 1;
        debugOverlaySetShown(1);
    }
    if (DAT_005f1600.mode == 3) {
        if (DAT_005806b4.started == 0) {
            mikadoSetCameraFlag80();
            DAT_005806b4.started = 1;
        }
        if (mikadoIsCameraNotState7() == 0)
            return 0;
        DAT_005806b4.started = 0;
        if (DAT_005806b4.overlayShown != 0) {
            debugOverlaySetShown(0);
            DAT_005806b4.overlayShown = 0;
        }
        return 1;
    }
    if (DAT_005806b4.started == 0) {
        DAT_005806b4.frame = 0;
        DAT_005806b4.started = 1;
        DAT_005806b4.finished = 0;
    }
    if (DAT_005806b4.finished != 0) {
        DAT_005f1600.ready = 0;
        frameTransitionSetMode(0);
        DAT_005806b4.finished = 0;
        DAT_005806b4.started = 0;
        if (DAT_005806b4.overlayShown != 0) {
            debugOverlaySetShown(0);
            DAT_005806b4.overlayShown = 0;
        }
        return 1;
    }
    if (DAT_005806b4.frame != 0) {
        if (DAT_005806b4.frame == 10) {
            DAT_005f185c = 1;
            FUN_002c2610();
            objectE0ResetFlags1040();
            frameTransitionSetMode(1);
            FUN_00379be8();
        }
        if (DAT_005806b4.frame == 0xB) {
            DAT_005f1600.loading = 1;
            g_mapDepartWork[10] = 0;
            FUN_002235f4();
            FUN_002c2610();
        }
        if (DAT_005806b4.frame <= 0x13)
            DAT_005806b4.frame++;
    } else {
        g_lmapScene->targetPosition = g_lmapScene->position;
        DAT_005806b4.frame++;
    }
    if (DAT_005806b4.frame < 100) {
        if (DAT_005806b4.frame >= 0xD && naviMainIsActive() != 0) {
            FUN_002c2358();
            mapRecordResumePoint();
            FUN_00249a08();
            FUN_002c3398(0);
            FUN_0031416c(200, 200, 200, 0x82, 0x82, 0x82, 0x1E, 0x1E, 0x1E, 0x96, 0x96, 0x96);
            DAT_005806b4.frame = 100;
            DAT_005f1600.ready = 1;
            FUN_0037a078();
        }
    } else if (campIsState85() == 0) {
        DAT_005f185c = 0;
        FUN_002c23cc(1);
        DAT_005f1600.loading = 0;
        sub68OwnerCall3();
        FUN_002b9520();
        mapEnvironmentSelectPreset(DAT_005f1600.scene);
        FUN_00297c3c();
        FUN_0023534c();
        FUN_002737a8();
        FUN_00234b30();
        g_mapDepartWork[10] = 1;
        FUN_002235f4();
        linkHolderClearFlag(((u32 *)g_lmapScene)[0x1A8 / 4]);
        FUN_00296530();
        FUN_0023a52c();
        DAT_005806b4.finished = 1;
        return 0;
    }
    return 0;
}

} /* extern "C" */
