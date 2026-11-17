#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

extern "C" void asdGxCommandListFinishCurrent(void);

// Account for the completed command entry before advancing the graphics queue.
extern "C" void asdGxAccountCommandBytesAndAdvanceQueue(void)
{
    AsdCmdBuffer *queue = g_asdGfxContext.activeBuffer;
    AsdCmdRecord *entry = &queue->entries[queue->unk28];
    if ((entry->flags & 2) == 0)
        queue->submittedBytes += entry->byteCount;
    asdGxCommandListFinishCurrent();
}
