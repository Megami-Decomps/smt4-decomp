#include "shard/W4_Match1b_RegisteredHandle.h"
#include <stddef.h>
#include "sys/RuntimeObjects.h"

struct CameraResourceCleanupView {
    u8 unk000[0x18];
    RegisteredHandle *primary;
    RegisteredHandle *secondary;
    RegisteredHandle *tertiary;
    RegisteredHandle *areas[10];
    s32 selectedArea; /* 0x4c */
    u8 unk050[0x544];
    RegisteredHandle *auxiliary; /* 0x594 */
    s32 selectedAuxiliary; /* 0x598 */
};
typedef char CameraResourceCleanupOffsets[offsetof(CameraResourceCleanupView, areas) == 0x24 &&
    offsetof(CameraResourceCleanupView, auxiliary) == 0x594 ? 1 : -1];

extern "C" {
extern void *g_handleRegistry;
void ptrListRemoveClearOwner(void *, u32);
void asdCameraInitAreas();
}

/* Unregister and destroy the owned camera handles, then reset the camera areas. */
extern "C" void cameraResourcesRelease(CameraResourceCleanupView *work)
{
    resourceOwnerReleaseAndReset(g_handleRegistry);
    if (work->primary != NULL) {
        ptrListRemoveClearOwner(g_handleRegistry, work->primary->id);
        if (work->primary != NULL) {
            delete work->primary;
            work->primary = NULL;
        }
    }
    for (s32 i = 0; i < 10; ++i) {
        if (work->areas[i] != NULL) {
            ptrListRemoveClearOwner(g_handleRegistry, work->areas[i]->id);
            if (work->areas[i] != NULL) {
                delete work->areas[i];
                work->areas[i] = NULL;
            }
        }
    }
    work->selectedArea = -1;
    if (work->secondary != NULL) {
        ptrListRemoveClearOwner(g_handleRegistry, work->secondary->id);
        if (work->secondary != NULL) {
            delete work->secondary;
            work->secondary = NULL;
        }
    }
    if (work->tertiary != NULL) {
        ptrListRemoveClearOwner(g_handleRegistry, work->tertiary->id);
        if (work->tertiary != NULL) {
            delete work->tertiary;
            work->tertiary = NULL;
        }
    }
    if (work->auxiliary != NULL) {
        delete work->auxiliary;
        work->auxiliary = NULL;
    }
    work->selectedAuxiliary = -1;
    asdCameraInitAreas();
}
