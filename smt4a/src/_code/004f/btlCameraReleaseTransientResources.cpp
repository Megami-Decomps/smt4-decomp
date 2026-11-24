#include "battle/btlCamera.h"
#include "battle/BtlEffectReset.h"
#include "battle/BtlGlobals.h"
#include "code/Code004f_Smt4a.h"

/* Clears the given camera flag bits. */
static __inline void btlCameraClearFlags(BtlCameraA *camera, u32 mask)
{
    camera->flags &= ~mask;
}

extern "C" {
void textureCacheReleaseAll();
void keyedRecordsFreeAll();
void btlCameraFinishTransition(void *controller);
void FUN_004f6e68(BtlEffectFiles *work);
void panelReset(void *controller);
void FUN_004f8fa0(void *controller);

/* Releases transient camera panels and resources and clears the active transition state. */
void btlCameraReleaseTransientResources(void *controller)
{
    BtlEffectFiles *work = (BtlEffectFiles *)controller;
    work->roster = NULL;
    panelReset(controller);
    FUN_004f6e68(work);
    clearMarkerSlots(work);
    if (work->backend != NULL) {
        work->backend->release();
        work->backend = NULL;
    }
    btlCameraFinishTransition(controller);
    work->animation = 0;
    keyedRecordsFreeAll();
    textureCacheReleaseAll();
    if (g_btlCamera != NULL) {
        btlCameraClearFlags(g_btlCamera, 0x08000000);
    }
    FUN_004f8fa0(controller);
    obj4FSlots28Reset((Obj4FSlots28 *)controller);
    resetEffectPlacements(work);
}
} /* extern "C" */
