/* NON_MATCHING: buffer literal sharing and offset-load order differ. */
#include "common.h"

extern "C" {

typedef struct SourceInfo {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s32 offset;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ u32 handle;
} SourceInfo;

typedef struct OffsetInfo {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s32 offset;
} OffsetInfo;

extern u8 DAT_004d8b40[0x90];

extern void *linkedFindItemByIndex(u32 handle, s32 offset);
extern u32 FUN_00323a08(u8 *buffer, s32 arg);
extern void rt_memcpy_w(void *dst, void *src, u32 size);

/* Edits the 0x90-byte record found for `source` through the shared buffer and returns FUN_00323a08's
 * result, with bit 23 added when its bit 0 is set. */
extern OffsetInfo DAT_0044f858;
u32 FUN_0032866c(SourceInfo *source)
{
    void *record = linkedFindItemByIndex(source->handle, source->offset + DAT_0044f858.offset);
    u32 result;

    rt_memcpy_w(DAT_004d8b40, record, 0x90);
    result = FUN_00323a08(DAT_004d8b40, 1);
    rt_memcpy_w(record, DAT_004d8b40, 0x90);
    if (result & 1) {
        result |= 0x800000;
    }
    return result;
}

} /* extern "C" */
