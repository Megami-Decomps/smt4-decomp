/* NON_MATCHING: retail retains unused pool words 0x0044ea80/0x0044f858; the initial index-load order also differs. */
#include "shard/W6_W6Match5_IndexedRecord.h"

extern "C" {
extern IndexedRecordBuffer DAT_004d8b40;
IndexedRecordBuffer *linkedFindItemByIndex(IndexedRecordList *, s32);
void rt_memcpy_w(void *, const void *, u32);
u32 FUN_003224c0(IndexedRecordBuffer *, u32);

// Edit an indexed record through scratch storage and mark flagged results.
u32 FUN_00328a30(IndexedRecordSource *source, const IndexedRecordSelection *selection)
{
    IndexedRecordBuffer *record = linkedFindItemByIndex(source->records,
                                            selection->index + source->baseIndex);
    rt_memcpy_w(&DAT_004d8b40, record, sizeof(IndexedRecordBuffer));
    u32 result = FUN_003224c0(&DAT_004d8b40, 1);
    rt_memcpy_w(record, &DAT_004d8b40, sizeof(IndexedRecordBuffer));
    if ((result & 1) != 0)
        result |= 0x800000;
    return result;
}
}
