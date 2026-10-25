/* NON_MATCHING: default look-at anchoring retains an extra saved register; active-camera and process-argument stores differ. */
#include "gfx/CameraManager.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
extern const char DAT_004092c8[];
// The retail symbol anchors the up vector; eye and target immediately precede it.
extern const CameraDefaultVector DAT_004d493c[];
extern CameraManagerIV g_asdCamera;
void memClear(void *, u32);
void FUN_002c2044(ManagedCameraIV *, s32);
void FUN_002c1edc(ManagedCameraIV *, const CameraDefaultVector *, const CameraDefaultVector *, const CameraDefaultVector *);
void FUN_002c1e30(ManagedCameraIV *, s32, f32, f32, f32, f32);
void asdCameraFreeWork(void);
void asdCameraTableRelease(void);
u32 asdProcessCreateSimple(const char *, u32, s32, s32, void (*)(void), void (*)(void), CameraManagerWorkIV *);

// Initialize the top and bottom screen cameras and start their manager process.
void FUN_00105cac(u32 priority)
{
    asdDebugTrace(DAT_004092c8, 635);
    CameraManagerWorkIV *work = (CameraManagerWorkIV *)asdMemAlloc(0x100, 0x100, 0, sizeof(CameraManagerWorkIV), 1);
    memClear(work, sizeof(CameraManagerWorkIV));
    g_asdCamera.work = work;
    FUN_002c2044(&work->cameras[0], 1);
    FUN_002c1edc(&work->cameras[0], DAT_004d493c - 2, DAT_004d493c - 1, DAT_004d493c);
    FUN_002c1e30(&work->cameras[0], 1, 30.0f, 20.0f, 25600.0f, 400.0f / 240.0f);
    FUN_002c2044(&work->cameras[1], 1);
    FUN_002c1edc(&work->cameras[1], DAT_004d493c - 2, DAT_004d493c - 1, DAT_004d493c);
    FUN_002c1e30(&work->cameras[1], 1, 30.0f, 20.0f, 25600.0f, 320.0f / 240.0f);
    work->active[0] = &work->cameras[0];
    work->active[1] = &work->cameras[1];
    g_asdCamera.job = asdProcessCreateSimple("CamManagerProc", priority, 0, 0,
        asdCameraTableRelease, asdCameraFreeWork, g_asdCamera.work);
}
}
