/* NON_MATCHING: readable rebuild of the map-depart load sequence; armcc here keeps the frame counter and the scene pointer in different registers across the staged calls (retail reloads DAT_00447518.frame between the stages). */
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
    u8 unk14[0xA];
    u8 loading;
    s8 ready;
};

extern "C" {
extern u8 *g_mapDepartWork;
extern DepartSequence DAT_00447518;
extern DepartFlags DAT_0049f920;
extern u8 DAT_0049fb48;

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
void FUN_0028a420(s32 arg);
void FUN_00294834(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void FUN_0029ae60(u32 arg);
s32 FUN_002b8694(void);
s32 NaviMain_IsCreated(void);

/* Per-frame driver of the map depart sequence. Returns 1 on the frame the sequence ends. */
u32 FUN_002eeb80(void)
{
    if (DAT_0049f920.ready != 0 && DAT_00447518.overlayShown == 0) {
        DAT_00447518.overlayShown = 1;
        debugOverlaySetShown(1);
    }
    if (DAT_0049f920.mode == 3) {
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
        DAT_0049f920.ready = 0;
        FUN_00275be8(0);
        DAT_00447518.finished = 0;
        DAT_00447518.started = 0;
        if (DAT_00447518.overlayShown != 0) {
            debugOverlaySetShown(0);
            DAT_00447518.overlayShown = 0;
        }
        return 1;
    }
    if (DAT_00447518.frame != 0) {
        if (DAT_00447518.frame == 10) {
            DAT_0049fb48 = 1;
            frameTexResetFlags();
            FUN_00275dc4();
            FUN_00275be8(1);
            FUN_00275bc8();
        }
        if (DAT_00447518.frame == 0xB) {
            DAT_0049f920.loading = 1;
            g_mapDepartWork[10] = 0;
            mapDepartSyncModelVisibility();
            frameTexResetFlags();
        }
        if (DAT_00447518.frame <= 0x13)
            DAT_00447518.frame++;
    } else {
        g_lmapScene->targetPosition = g_lmapScene->position;
        DAT_00447518.frame++;
    }
    if (DAT_00447518.frame < 100) {
        if (DAT_00447518.frame >= 0xD && NaviMain_IsCreated() != 0) {
            FUN_002759bc();
            FUN_002758d8();
            FUN_0027581c();
            FUN_0028a420(0);
            FUN_00294834(200, 200, 200, 0x82, 0x82, 0x82, 0x1E, 0x1E, 0x1E, 0x96, 0x96, 0x96);
            DAT_00447518.frame = 100;
            DAT_0049f920.ready = 1;
            mapUpdatePerFrame();
        }
    } else if (FUN_002b8694() == 0) {
        DAT_0049fb48 = 0;
        FUN_00280ac0(1);
        DAT_0049f920.loading = 0;
        FUN_002757a8();
        FUN_00275714();
        mapEntryTriggerForScene(DAT_0049f920.scene);
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
