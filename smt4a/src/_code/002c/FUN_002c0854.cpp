#include "shard/W5_W5Match7_SelectedRecord.h"
extern "C" {
u32 loadSlotIsLoaded(u32);
CallbackLoadedObject* FUN_00275bc8(void*, void*);

u32 FUN_002c0854(void)
{
    SelectionOwner* work = g_callbackWork;
    if (work == NULL) {
        return 1;
    }
    if (work->unk10 != NULL && work->unk18 != NULL && work->unk1C != NULL &&
        loadSlotIsLoaded(0x14) != 0 && loadSlotIsLoaded(0x25) != 0 && loadSlotIsLoaded(0x3E) != 0) {
        if (work->createdObject == NULL) {
            work->createdObject = FUN_00275bc8(work->unk10, work->unk18);
            work->createdObject->unk108 = 0;
        }
        return 1;
    }
    return 0;
}
}
