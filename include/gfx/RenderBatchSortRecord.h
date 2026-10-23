#ifndef GFX_RENDER_BATCH_SORT_RECORD_H
#define GFX_RENDER_BATCH_SORT_RECORD_H
#include "common.h"
#include <stddef.h>

struct RenderBatchSortRecord {
    u32 group;
    u32 key;
    u32 secondaryKey;
    void *object;
};
typedef char RenderBatchSortRecordOffsets[
    sizeof(RenderBatchSortRecord) == 0x10 &&
    offsetof(RenderBatchSortRecord, key) == 4 &&
    offsetof(RenderBatchSortRecord, secondaryKey) == 8 &&
    offsetof(RenderBatchSortRecord, object) == 0xC ? 1 : -1];
#endif
