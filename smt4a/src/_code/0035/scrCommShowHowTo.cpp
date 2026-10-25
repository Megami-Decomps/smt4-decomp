/* NON_MATCHING: command-frame local recovers controller load timing; cleanup and job work pointers still coalesce. */
#include "shard/W5_W5Match6_CallbackController.h"
#include "util/CalleeContracts.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "gamedata/DataTableSections.h"

struct HowToWork {
    u32 job;
    u8 state;
    u8 unk05[3];
    void *bufferA;
    void *bufferB;
    u8 unk10[0x78];
    void **slots[3];
    u8 unk94[0x184];
    u16 touchCount;
};
struct HowToControllerView {
    u8 ownsTable;
    u8 unk01[3];
    HowToWork *work;
};
extern "C" {
u32 scrGetCommandFrame();
u32 scrGetArg(u32 index);
u32 loadSlotIsLoaded(u32 slot);
void loadSlotRequestAsync(u32 slot, s32 flags);
void FUN_00348d7c(s32 id);
void ifTouchRegionRemove();
void asdMemFreeSlot(void **slot);
void asdMemFree(void *buffer);
void asdTMTexTableReleaseNode(s32 table, s32 index);
u32 jobStop(u32 job, u16 mode);
void asdOperatorDelete(void *object);

u32 scrCommShowHowTo()
{
    u32 frame = scrGetCommandFrame();
    HowToControllerView *controller = (HowToControllerView *)&g_callbackController;
    if (frame == 0) {
        s32 id = (s32)scrGetArg(0);
        if (!loadSlotIsLoaded(0x46)) {
            loadSlotRequestAsync(0x46, 0);
            controller->ownsTable = 1;
        }
        FUN_00348d7c(id);
    }
    u8 state = controller->work->state;
    if (state != 0 && state != 10) {
        return 0;
    }
    if (controller->ownsTable) {
        dataTableFree(0x46);
        controller->ownsTable = 0;
    }
    HowToWork *work = controller->work;
    for (s32 index = 0; index < work->touchCount; ++index) {
        ifTouchRegionRemove();
    }
    for (s32 index = 0; index < 3; ++index) {
        asdMemFreeSlot(work->slots[index]);
        work->slots[index] = NULL;
    }
    if (work->bufferA != NULL) {
        asdMemFree(work->bufferA);
        work->bufferA = NULL;
    }
    if (work->bufferB != NULL) {
        asdMemFree(work->bufferB);
        work->bufferB = NULL;
    }
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
