#include "addon/SceneResource.h"
#include "classes/AocMenu.h"
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {
extern SceneResourceWork *g_sceneResourceWork;
void campCommonBgAcquire(void);
void campButtonHelpLoad(void);
void campButtonHelpAcquire(void);
void aocMenuUpdate(AocMenu *menu);
void titleSetSlotValueState2(s32 channel, s32 value);
void soundChannelStopAll(s32 mask);
void campButtonHelpRelease(void);
void helpTexturesRelease(void);
void campCommonBgRelease(void);

/* Opens the menu (state 0), waits until it is up (1), then closes it (2); returns -1 once done (3). */
u32 aocMainProcessUpdate(void)
{
    SceneResourceWork *work = g_sceneResourceWork;

    switch (work->state.pending) {
    case 0:
        campCommonBgAcquire();
        campButtonHelpLoad();
        campButtonHelpAcquire();
        work->resource = (SceneResource *)new AocMenu;
        aocMenuReset((AocMenu *)work->resource);
        work->state.pending = 1;
        break;
    case 1:
        aocMenuUpdate((AocMenu *)work->resource);
        if ((((AocMenu *)work->resource)->flags & 1) != 0) {
            work->state.pending = 2;
        }
        break;
    case 2:
        if (work->state.resetChannels != 0) {
            titleSetSlotValueState2(0, 1);
            titleSetSlotValueState2(1, 1);
            soundChannelStopAll(0xF);
        } else {
            u8 request = 1;
            asdSequenceRequest(1, &request, 1);
        }
        work->state.pending = 3;
        sceneResourceRelease(work);
        campButtonHelpRelease();
        helpTexturesRelease();
        campCommonBgRelease();
        break;
    case 3:
        return 0xFFFFFFFF;
    }
    return 0;
}

} /* extern "C" */
