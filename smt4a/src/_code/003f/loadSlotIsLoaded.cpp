#include "common.h"

extern "C" {

struct LoadSlot { u32 unk00; void *data; u32 unk08[2]; };
extern LoadSlot g_dataTableSlots[80];

s32 loadSlotIsLoaded(u32 index)
{
    if (index >= 80) {
        return 0;
    }
    return g_dataTableSlots[index].data != NULL;
}

} /* extern "C" */
