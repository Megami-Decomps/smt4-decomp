#include "shard/W6_W6Match5_IndexedRecord.h"
#include "gfx/EffectEditorStorage.h"
extern "C" {

IndexedRecordBuffer *linkedFindItemByIndex(IndexedRecordList *, s32);
void __aeabi_memcpy4(void *, const void *, u32);
u32 FUN_00323a08(EffectEditorSnapshot *, s32);
extern IndexedRecordSelection DAT_0044f858;

// Edit an indexed record through scratch storage and mark flagged results.
u32 effectEditorEditSelectedRecord(void)
{
    IndexedRecordBuffer *record = linkedFindItemByIndex(
        static_cast<IndexedRecordList *>(g_effectEditor.selection.list),
        DAT_0044f858.index + g_effectEditor.selection.index);
    __aeabi_memcpy4(&g_effectEditorSettings, record, sizeof(IndexedRecordBuffer));
    u32 result = FUN_00323a08(&g_effectEditorSettings.snapshot, 1);
    __aeabi_memcpy4(record, &g_effectEditorSettings, sizeof(IndexedRecordBuffer));
    if ((result & 1) != 0)
        result |= 0x800000;
    return result;
}
}
