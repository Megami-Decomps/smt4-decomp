/* NON_MATCHING: retail retains unused pool words 0x0059dbe0/0x0059e9a8; the initial index-load order also differs. */
#include "shard/W6_W6Match5_IndexedRecord.h"

extern "C" {
extern IndexedRecordBuffer DAT_00634bc0;
IndexedRecordBuffer *linkedFindItemByIndex(IndexedRecordList *, s32);
void rt_memcpy_w(void *, const void *, u32);
u32 FUN_003c378c(IndexedRecordBuffer *, u32);

// Edit an indexed record through scratch storage and mark flagged results.
u32 FUN_003cc810(IndexedRecordSource *source, const IndexedRecordSelection *selection)
{
    IndexedRecordBuffer *record = linkedFindItemByIndex(source->records,
                                            selection->index + source->baseIndex);
    rt_memcpy_w(&DAT_00634bc0, record, sizeof(IndexedRecordBuffer));
    u32 result = FUN_003c378c(&DAT_00634bc0, 1);
    rt_memcpy_w(record, &DAT_00634bc0, sizeof(IndexedRecordBuffer));
    if ((result & 1) != 0)
        result |= 0x800000;
    return result;
}
}
