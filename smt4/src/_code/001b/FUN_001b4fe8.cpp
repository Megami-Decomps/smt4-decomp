/* NON_MATCHING: only the readyToRelease store is scheduled before the resource load (retail: pending store, resource load, readyToRelease store, compare). */
#include "addon/SceneResource.h"
#include "ui/SceneWindowWork.h"
#include "classes/AocMenu.h"
#include "shard/W6_W6Match2_EntrySequence.h"


extern "C" {
extern SceneResourceWork *g_sceneResourceWork;
void commonBgAcquire();
void buttonHelpAcquireResources();
void buttonHelpCreate();
void FUN_00296fec();
void aocMenuUpdate(SceneResource *);
void titleSetSlotValueState2(u32, u32);
void soundChannelStopAll(u32);
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
        commonBgAcquire();
        buttonHelpAcquireResources();
        buttonHelpCreate();
        // The allocation extends beyond the recovered SceneWindowWork prefix.
        AocMenu *resource = static_cast<AocMenu *>(asdOperatorNew(0x2434));
        if (resource)
            resource = new (resource) AocMenu;
        work->resource = reinterpret_cast<SceneResource *>(resource);
        FUN_00296fec();
        work->state.pending = 1;
        break;
    }
    case 1:
        aocMenuUpdate(work->resource);
        if (reinterpret_cast<SceneWindowWork *>(work->resource)->unk0000 & 1)
            work->state.pending = 2;
        break;
    case 2:
        if (work->state.resetChannels) {
            titleSetSlotValueState2(0, 1);
            titleSetSlotValueState2(1, 1);
            soundChannelStopAll(15);
        } else {
            u8 argument = 1;
            asdSequenceRequest(1, &argument, sizeof(argument));
        }
        work->state.pending = 3;
        work->readyToRelease = 1;
        if (SceneResource *resource = work->resource) {
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
