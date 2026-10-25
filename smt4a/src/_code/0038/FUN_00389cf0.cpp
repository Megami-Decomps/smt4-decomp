/* NON_MATCHING: global-base loading and the allocation's 0x348-byte multiplication use different temporary registers and scheduling. */
#include "shard/W6_W6Match7_KeyedRecordStorage.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern KeyedRecordStorage g_keyedRecords[];
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 bytes, u32 tracked);
void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);
}

/* Store up to sixteen fixed-size effect snapshots in a keyed record. */
extern "C" void FUN_00389cf0(u32 index, const void *records, s32 count)
{
    if (count > 16) {
        return;
    }
    KeyedRecordStorage *record = &g_keyedRecords[index];
    if (count > 0) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\Effect\\EffectSave.c", 189);
        u32 bytes = count * 0x348;
        record->effectSave.records = asdMemoryAlloc(0x100, 0x100, 0, bytes, 1);
        __aeabi_memcpy4(record->effectSave.records, records, bytes);
    }
    record->effectSave.count = count;
}
