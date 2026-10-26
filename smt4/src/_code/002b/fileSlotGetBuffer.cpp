#include "classes/FileSlot.h"

extern "C" {
void *fileSlotGetBuffer(u32 id)
{
    if (id < FILE_SLOT_COUNT) {
        return g_fileSlots[id].data;
    }
    return NULL;
}
}
