#include "common.h"

extern "C" {

class CameraBackend {
public:
    virtual void unusedSlot0();
    virtual void release();
};

typedef struct GfxRef {
    /* 0x0 */ u32 object;
    /* 0x4 */ u32 aux;
} GfxRef;

typedef struct BtlCamera {
    /* 0x000 */ u8 unk000[0x40];
    /* 0x040 */ u32 job;
    /* 0x044 */ u8 unk044[0x28];
    /* 0x06C */ u8 registryEntry[0x5EC];
    /* 0x658 */ CameraBackend *backend;
    /* 0x65C */ u8 unk65C[0x140];
    /* 0x79C */ GfxRef gfx;
} BtlCamera;

typedef struct HandleRegistry {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 cameraHandle;
} HandleRegistry;

typedef struct JobWork {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ u32 job;
} JobWork;

extern BtlCamera *g_btlCamera;
extern HandleRegistry *g_handleRegistry;

extern JobWork *jobGetWork(void);
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
void btlCameraDestroy(void)
{
    JobWork *work = jobGetWork();
    BtlCamera *camera = g_btlCamera;
    CameraBackend *backend;

    if (camera != NULL) {
        g_handleRegistry->cameraHandle = 0;
        jobRefStopAndFree();
        uiFreeCallback(camera->job);
        camera->job = 0;
        eventCommandSetPendingCleanup(0);
        if (camera->gfx.object != 0) {
            FUN_00359370(camera->gfx.object, 0);
            gfxObjectDestroy(camera->gfx.object);
            camera->gfx.object = 0;
            camera->gfx.aux = 0;
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
    jobStop(work->job, 0);
}

} /* extern "C" */
