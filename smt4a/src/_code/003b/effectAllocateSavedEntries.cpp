#include "shard/W6_W6Match7_KeyedRecordStorage.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern KeyedEffectSaveStorage g_keyedRecords[];
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 tracked);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
}

// Preserve up to 64 effect records in the selected keyed slot.
extern "C" void effectAllocateSavedEntries(u32 index, const EffectSaveRecord *records, s32 count)
{
    if (count > 64)
        return;
    if (count > 0) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\Effect\\EffectSave.c", 213);
        void *copy = asdMemoryAlloc(0x100, 0x100, 0, count * sizeof(EffectSaveRecord), 1);
        g_keyedRecords[index].records = static_cast<EffectSaveRecord *>(copy);
        __aeabi_memcpy4(copy, records, count * sizeof(EffectSaveRecord));
    }
    g_keyedRecords[index].count = count;
}
