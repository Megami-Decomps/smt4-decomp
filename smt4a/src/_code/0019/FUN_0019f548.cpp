/* NON_MATCHING: saved resource/registry registers, array-field writeback and selection-reset scheduling differ. */
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

static void releaseRegisteredHandle(RegisteredHandle *&handle)
{
    if (handle != NULL) {
        ptrListRemoveClearOwner(g_handleRegistry, handle->id);
        if (handle != NULL) {
            delete handle;
            handle = NULL;
        }
    }
}

/* Unregister and destroy the owned camera handles, then reset the camera areas. */
extern "C" void FUN_0019f548(CameraResourceCleanupView *work)
{
    resourceOwnerReleaseAndReset(g_handleRegistry);
    releaseRegisteredHandle(work->primary);
    for (s32 i = 0; i < 10; ++i)
        releaseRegisteredHandle(work->areas[i]);
    work->selectedArea = -1;
    releaseRegisteredHandle(work->secondary);
    releaseRegisteredHandle(work->tertiary);
    if (work->auxiliary != NULL) {
        delete work->auxiliary;
        work->auxiliary = NULL;
    }
    work->selectedAuxiliary = -1;
    asdCameraInitAreas();
}
