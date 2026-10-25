/* NON_MATCHING: retail retains unused pool words 0x0044ea80/0x0044f858; the initial index-load order also differs. */
#include "shard/W6_W6Match5_IndexedRecord.h"

extern "C" {
extern IndexedRecordBuffer g_effectEditorSettings;
IndexedRecordBuffer *linkedFindItemByIndex(IndexedRecordList *, s32);
void __aeabi_memcpy4(void *, const void *, u32);
u32 FUN_003224c0(IndexedRecordBuffer *, u32);

// Edit an indexed record through scratch storage and mark flagged results.
u32 FUN_00328a28(IndexedRecordSource *source, const IndexedRecordSelection *selection)
{
    IndexedRecordBuffer *record = linkedFindItemByIndex(source->records,
                                            selection->index + source->baseIndex);
    __aeabi_memcpy4(&g_effectEditorSettings, record, sizeof(IndexedRecordBuffer));
    u32 result = FUN_003224c0(&g_effectEditorSettings, 1);
    __aeabi_memcpy4(record, &g_effectEditorSettings, sizeof(IndexedRecordBuffer));
    if ((result & 1) != 0)
        result |= 0x800000;
    return result;
}
}
