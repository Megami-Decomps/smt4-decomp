/* NON_MATCHING: snapshot, source, and copy-size locals occupy different saved registers from retail. */
#include "gamedata/event/EventSaveData.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"

extern "C" {
void *asdMemoryAlloc(s32, s32, s32, u32, s32);
void *rt_memcpy(void *, const void *, u32);

// Allocate a snapshot of the event save-data block.
EventSaveData *FUN_003fd478(void)
{
    GameSaveData *save = reinterpret_cast<GameSaveData *>(gameFlagBlockGet());
    u32 size = sizeof(EventSaveData);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\gamedata\\event\\EventSaveData.cpp", 0x79);
    EventSaveData *snapshot = (EventSaveData *)asdMemoryAlloc(
        ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, size, 1);
    rt_memcpy(snapshot, &save->event, size);
    return snapshot;
}
}
