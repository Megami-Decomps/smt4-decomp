/* NON_MATCHING: effect record allocation/copy and literal data match; only address/size calculation scheduling and scratch registers differ. */
#include "shard/W6_W6Match7_KeyedRecordStorage.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern KeyedEffectSaveStorage g_keyedRecords[];
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 tracked);
void rt_memcpy_w(void *destination, const void *source, u32 size);
}

// Preserve up to 64 effect records in the selected keyed slot.
extern "C" void FUN_003b6728(u32 index, const EffectSaveRecord *records, s32 count)
{
    if (count > 64)
        return;
    KeyedEffectSaveStorage *storage = &g_keyedRecords[index];
    if (count > 0) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\Effect\\EffectSave.c", 213);
        u32 size = count * sizeof(EffectSaveRecord);
        storage->records = (EffectSaveRecord *)asdMemoryAlloc(0x100, 0x100, 0, size, 1);
        rt_memcpy_w(storage->records, records, size);
    }
    storage->count = count;
}
