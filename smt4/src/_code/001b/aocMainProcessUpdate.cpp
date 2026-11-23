#include "addon/SceneResource.h"
#include "ui/SceneWindowWork.h"
#include "classes/AocMenu.h"
#include "shard/W6_W6Match2_EntrySequence.h"


extern "C" {
extern SceneResourceWork *g_sceneResourceWork;
void commonBgAcquire();
void buttonHelpAcquireResources();
void buttonHelpCreate();
void aocMenuUpdate(SceneResource *);
void titleSetSlotValueState2(u32, u32);
void soundChannelStopAll(u32);
void buttonHelpRelease();
void buttonHelpTexturesUnref();
void uiFadeRelease();

/* Opens the AOC menu (state 0), waits until it is up (1), then closes it (2); returns -1 once done (3). */
u32 aocMainProcessUpdate()
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
        aocMenuReset(resource);
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
        sceneResourceRelease(work);
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
