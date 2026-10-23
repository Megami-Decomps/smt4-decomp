/* NON_MATCHING: only resource-pointer load scheduling around exit-state byte stores differs. */
#include "addon/SceneResource.h"
#include "ui/SceneWindowWork.h"

extern "C" {
extern SceneResourceWork *g_sceneResourceWork;
void FUN_002898e4();
void buttonHelpAcquireResources();
void buttonHelpCreate();
void *asdOperatorNew(u32);
SceneWindowWork *FUN_00393340(SceneWindowWork *);
void FUN_00296fec();
void FUN_00392e74(SceneResource *);
void FUN_002a03d8(u32, u32);
void soundChannelStopAll(u32);
void asdSequenceRequest(s32, const void *, u32);
void FUN_002c5700();
void *FUN_0027e974(SceneResource *);
void buttonHelpRelease();
void buttonHelpTexturesUnref();
void uiFadeRelease();

u32 FUN_001b4fe8()
{
    SceneResourceWork *work = g_sceneResourceWork;
    switch (work->state.pending) {
    case 0: {
        FUN_002898e4();
        buttonHelpAcquireResources();
        buttonHelpCreate();
        // The allocation extends beyond the recovered SceneWindowWork prefix.
        SceneWindowWork *resource = static_cast<SceneWindowWork *>(asdOperatorNew(0x2434));
        if (resource)
            resource = FUN_00393340(resource);
        work->resource = reinterpret_cast<SceneResource *>(resource);
        FUN_00296fec();
        work->state.pending = 1;
        break;
    }
    case 1:
        FUN_00392e74(work->resource);
        if (reinterpret_cast<SceneWindowWork *>(work->resource)->unk0000 & 1)
            work->state.pending = 2;
        break;
    case 2:
        if (work->state.resetChannels) {
            FUN_002a03d8(0, 1);
            FUN_002a03d8(1, 1);
            soundChannelStopAll(15);
        } else {
            u8 argument = 1;
            asdSequenceRequest(1, &argument, sizeof(argument));
        }
        work->state.pending = 3;
        work->readyToRelease = 1;
        if (work->resource) {
            FUN_002c5700();
            if (work->resource) {
                asdMemFreeNonNull(FUN_0027e974(work->resource));
                work->resource = NULL;
            }
        }
        buttonHelpRelease();
        buttonHelpTexturesUnref();
        uiFadeRelease();
        break;
    case 3:
        return static_cast<u32>(-1);
    }
    return 0;
}
}
