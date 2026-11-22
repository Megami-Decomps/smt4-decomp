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
    if (scrGetCommandFrame() == 0) {
        s32 id = (s32)scrGetArg(0);
        if (!loadSlotIsLoaded(0x46)) {
            loadSlotRequestAsync(0x46, 0);
            g_callbackController.ownsTable = 1;
        }
        FUN_00348d7c(id);
    }
    u8 state = ((CallbackControllerWork *)g_callbackController.work)->state;
    if (state != 0 && state != 10) {
        return 0;
    }
    if (g_callbackController.ownsTable) {
        dataTableFree(0x46);
        g_callbackController.ownsTable = 0;
    }
    CallbackControllerWork *work = (CallbackControllerWork *)g_callbackController.work;
    work->releaseInputAndBuffers();
    for (s32 index = 0; index < 19; ++index) {
        if (asdTMTexTableNodeIsLoaded(0x33, index)) {
            asdTMTexTableReleaseNode(0x33, index);
        }
    }
    asdTMTexTableFreeEntry(0x33);
    jobStop(work->job, 0);
    if (g_callbackController.work != NULL) {
        asdOperatorDelete(g_callbackController.work);
        g_callbackController.work = NULL;
    }
    return 1;
}
} /* extern "C" */
