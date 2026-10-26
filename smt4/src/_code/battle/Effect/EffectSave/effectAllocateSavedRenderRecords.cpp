#include "common.h"
#include "shard/W6_W6Match7_KeyedRecordStorage.h"
#include "AsdSDK/AsdDebug.h"

struct SavedEffectRecord { u8 data[0x348]; };
extern "C" KeyedRecordStorage g_keyedRecords[];
extern "C" void *asdMemoryAlloc(u32 alignment, u32 heap, u32 flags, u32 bytes, u32 enabled);
extern "C" void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);

// Keep a private copy of up to sixteen effect-save records in the selected slot.
extern "C" void effectAllocateSavedRenderRecords(s32 slot, const SavedEffectRecord *records, s32 count)
{
    if (count > 16)
        return;
    if (count > 0) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\Effect\\EffectSave.c", 189);
        void *copy = asdMemoryAlloc(0x100, 0x100, 0, count * sizeof(SavedEffectRecord), 1);
        g_keyedRecords[slot].effectSave.records = copy;
        __aeabi_memcpy4(copy, records, count * sizeof(SavedEffectRecord));
    }
    g_keyedRecords[slot].effectSave.count = count;
}
