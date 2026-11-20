/* NON_MATCHING: cleanup and job pointers are copied in the opposite direction, and the command frame block allocates registers differently. */
#include "ui/HowToController.h"
#include "sys/RuntimeObjects.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "gamedata/DataTableSections.h"
#include "battle/btlDebug.h"

extern "C" {
u32 scrGetCommandFrame();
u32 scrGetArg(u32 index);
void loadSlotRequestAsync(u32 slot, s32 flags);
void FUN_00348d7c(s32 id);
void asdTMTexTableReleaseNode(s32 table, s32 index);

/* Opens the how-to screen on the first command frame, and releases it once closed. */
u32 scrCommShowHowTo()
{
    u32 frame = scrGetCommandFrame();
    CallbackControllerGlobal *controller = &g_callbackController;
    if (frame == 0) {
        s32 id = (s32)scrGetArg(0);
        if (!loadSlotIsLoaded(0x46)) {
            loadSlotRequestAsync(0x46, 0);
            controller->ownsTable = 1;
        }
        FUN_00348d7c(id);
    }
    u8 state = ((CallbackControllerWork *)controller->work)->state;
    if (state != 0 && state != 10) {
        return 0;
    }
    if (controller->ownsTable) {
        dataTableFree(0x46);
        controller->ownsTable = 0;
    }
    CallbackControllerWork *work = (CallbackControllerWork *)controller->work;
    work->releaseInputAndBuffers();
    for (s32 index = 0; index < 19; ++index) {
        if (asdTMTexTableNodeIsLoaded(0x33, index)) {
            asdTMTexTableReleaseNode(0x33, index);
        }
    }
    asdTMTexTableFreeEntry(0x33);
    jobStop(work->job, 0);
    if (controller->work != NULL) {
        asdOperatorDelete(controller->work);
        controller->work = NULL;
    }
    return 1;
}
}
