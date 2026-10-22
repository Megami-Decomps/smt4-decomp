/* NON_MATCHING: resource accesses agree, but the loop counter and saved owner/work registers differ. */
#include "common.h"

struct CallbackSlotWork {
    u32 job; // 0x000
    u8 unk004[0x2f4];
    u16 regions[12]; // 0x2f8
    s32 regionCount; // 0x310
    void *firstBuffer; // 0x314
    void *secondBuffer; // 0x318
    void *thirdBuffer; // 0x31c
};
struct CallbackSlotGlobals {
    u32 unk00;
    CallbackSlotWork *work; // 0x04
};
extern "C" {
extern CallbackSlotGlobals g_callbackOwnerSlots;
void ifTouchRegionRemove();
void ifTouchResetRecord();
void asdMemFree(void *block);
void jobStop(u32 job, u32 mode);
void asdOperatorDelete(void *object);

// Release registered touch regions and owned buffers, stop the callback job, then delete its work.
void FUN_003492dc()
{
    CallbackSlotWork *work = g_callbackOwnerSlots.work;
    if (work->regionCount > 0) {
        for (s32 i = 0; i < work->regionCount++; ++i) {
            ifTouchRegionRemove();
            work->regions[i] = 0xffff;
        }
        work->regionCount = 0;
        ifTouchResetRecord();
    }
    if (work->firstBuffer) {
        asdMemFree(work->firstBuffer);
        work->firstBuffer = NULL;
    }
    if (work->secondBuffer) {
        asdMemFree(work->secondBuffer);
        work->secondBuffer = NULL;
    }
    if (work->thirdBuffer) {
        asdMemFree(work->thirdBuffer);
        work->thirdBuffer = NULL;
    }
    jobStop(work->job, 0);
    if (g_callbackOwnerSlots.work) {
        asdOperatorDelete(g_callbackOwnerSlots.work);
        g_callbackOwnerSlots.work = NULL;
    }
}
}
