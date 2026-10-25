#include "shard/W6_W6Match5_IndexedRecord.h"
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {
extern IndexedRecordBuffer DAT_004d8b40;
IndexedRecordBuffer *linkedFindItemByIndex(IndexedRecordList *, s32);
void __aeabi_memcpy4(void *, const void *, u32);
u32 FUN_00323a08(IndexedRecordBuffer *, u32);
extern IndexedRecordSelection DAT_0044f858;

// Edit an indexed record through scratch storage and mark flagged results.
u32 effectEditorEditSelectedRecord(void)
{
    IndexedRecordBuffer *record = linkedFindItemByIndex(
        static_cast<IndexedRecordList *>(g_effectEditor.selection.list),
        DAT_0044f858.index + g_effectEditor.selection.index);
    __aeabi_memcpy4(&DAT_004d8b40, record, sizeof(IndexedRecordBuffer));
    u32 result = FUN_00323a08(&DAT_004d8b40, 1);
    __aeabi_memcpy4(record, &DAT_004d8b40, sizeof(IndexedRecordBuffer));
    if ((result & 1) != 0)
        result |= 0x800000;
    return result;
}
}
