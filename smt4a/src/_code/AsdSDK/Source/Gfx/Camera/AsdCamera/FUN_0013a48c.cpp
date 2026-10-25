/* NON_MATCHING: default look-at address anchoring retains an extra register; process-argument stores differ. */
#include "gfx/CameraManager.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
extern const char DAT_0053d0a0[];
extern const CameraDefaultLookAt DAT_006309a0;
extern CameraManager g_asdCamera;
void *asdMemoryAllocTracked(u32, u32, u32, u32, u32);
void sysMemClear(void *, u32);
void asdCameraInitializeDefaults(ManagedCamera *, s32);
void FUN_0014f0dc(ManagedCamera *, const CameraDefaultVector *, const CameraDefaultVector *, const CameraDefaultVector *);
void FUN_001523b8(ManagedCamera *, s32, f32, f32, f32, f32);
void asdCameraFreeWork(u32 process);
s32 asdCameraTableRelease(u32 process);
u32 asdProcessCreateSimple(const char *, s32, u32, AsdProcFunc, AsdProcUpdateFunc, AsdProcFunc, void *);

/* Initialize the top and bottom screen cameras and start their manager process. */
void FUN_0013a48c(u32 priority)
{
    asdDebugTrace(DAT_0053d0a0, 641);
    CameraManagerWork *work = (CameraManagerWork *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(CameraManagerWork), 1);
    sysMemClear(work, sizeof(CameraManagerWork));
    g_asdCamera.work = work;
    asdCameraInitializeDefaults(&work->cameras[0], 1);
    FUN_0014f0dc(&work->cameras[0], &DAT_006309a0.eye, &DAT_006309a0.target, &DAT_006309a0.up);
    FUN_001523b8(&work->cameras[0], 1, 30.0f, 20.0f, 25600.0f, 400.0f / 240.0f);
    asdCameraInitializeDefaults(&work->cameras[1], 1);
    FUN_0014f0dc(&work->cameras[1], &DAT_006309a0.eye, &DAT_006309a0.target, &DAT_006309a0.up);
    FUN_001523b8(&work->cameras[1], 1, 30.0f, 20.0f, 25600.0f, 320.0f / 240.0f);
    work->active[0] = &work->cameras[0];
    work->active[1] = &work->cameras[1];
    g_asdCamera.job = asdProcessCreateSimple("CamManagerProc", priority, 0, 0,
        asdCameraTableRelease, asdCameraFreeWork, g_asdCamera.work);
}
}
