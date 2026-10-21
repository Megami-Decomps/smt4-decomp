/* NON_MATCHING: snapshot, source, and copy-size locals occupy different saved registers from retail. */
#include "gamedata/event/EventSaveData.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
GameSaveData *gameGetFlagBlock(void);
void *asdMemoryAlloc(s32, s32, s32, u32, s32);
void *rt_memcpy(void *, const void *, u32);

// Allocate a snapshot of the event save-data block.
EventSaveData *FUN_0033f6d8(void)
{
    GameSaveData *save = gameGetFlagBlock();
    u32 size = sizeof(EventSaveData);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\gamedata\\event\\EventSaveData.cpp", 0x79);
    EventSaveData *snapshot = (EventSaveData *)asdMemoryAlloc(
        ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, size, 1);
    rt_memcpy(snapshot, &save->event, size);
    return snapshot;
}
}
