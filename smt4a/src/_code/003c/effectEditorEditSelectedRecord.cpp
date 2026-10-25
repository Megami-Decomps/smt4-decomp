#include "shard/W6_W6Match5_IndexedRecord.h"
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {
extern IndexedRecordBuffer DAT_00634bc0;
IndexedRecordBuffer *linkedFindItemByIndex(IndexedRecordList *, s32);
void __aeabi_memcpy4(void *, const void *, u32);
u32 FUN_003c378c(IndexedRecordBuffer *, u32);
extern IndexedRecordSelection DAT_0059e9a8;

// Edit an indexed record through scratch storage and mark flagged results.
u32 effectEditorEditSelectedRecord(void)
{
    IndexedRecordBuffer *record = linkedFindItemByIndex(
        static_cast<IndexedRecordList *>(g_effectEditor.selection.list),
        DAT_0059e9a8.index + g_effectEditor.selection.index);
    __aeabi_memcpy4(&DAT_00634bc0, record, sizeof(IndexedRecordBuffer));
    u32 result = FUN_003c378c(&DAT_00634bc0, 1);
    __aeabi_memcpy4(record, &DAT_00634bc0, sizeof(IndexedRecordBuffer));
    if ((result & 1) != 0)
        result |= 0x800000;
    return result;
}
}
