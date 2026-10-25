#include "battle/btlCamera.h"
#include "shard/JobWork.h"

extern "C" {

typedef struct HandleRegistry {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 cameraHandle;
} HandleRegistry;

extern BtlCameraA *g_btlCamera;
extern HandleRegistry *g_handleRegistry;

extern void jobStop(u32 job, s32 arg);
extern void jobRefStopAndFree(void);
extern void uiFreeCallback(u32 job);
extern void eventCommandSetPendingCleanup(s32 arg);
extern void FUN_00359370(u32 object, s32 arg);
extern void gfxObjectDestroy(u32 object);
extern void cameraRegistryRemove(void *entry);
extern void asdCameraResetScreenDefaults(s32 a, s32 b, f32 seconds);
extern void asdMemFree(void *block);

/* Tears down the battle camera (its job, gfx object, backend and registry entry) and stops the calling job. */
void btlCameraDestroy(u32 job)
{
    BtlCameraJobA *work = (BtlCameraJobA *)jobGetWork(job);
    BtlCameraA *camera = g_btlCamera;
    CameraBackend *backend;

    if (camera != NULL) {
        g_handleRegistry->cameraHandle = 0;
        jobRefStopAndFree();
        uiFreeCallback(camera->job);
        camera->job = 0;
        eventCommandSetPendingCleanup(0);
        if (camera->graphics.object != 0) {
            FUN_00359370(camera->graphics.object, 0);
            gfxObjectDestroy(camera->graphics.object);
            camera->graphics.object = 0;
            camera->graphics.aux = 0;
        }
        backend = camera->backend;
        if (backend != NULL) {
            backend->release();
            camera->backend = NULL;
        }
        cameraRegistryRemove(camera->registryEntry);
        asdCameraResetScreenDefaults(0, 1, 10.0f);
        asdMemFree(g_btlCamera);
        g_btlCamera = NULL;
    }
    jobStop(work->drawJob, 0);
}

} /* extern "C" */
