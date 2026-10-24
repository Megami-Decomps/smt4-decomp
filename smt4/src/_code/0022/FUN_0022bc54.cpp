/* NON_MATCHING: retail writes the cursor straight into the return slot (strhi/stm/str writeback chain); built if-converts a temporary. */
#include "common.h"

struct SpanSource {
    u8 unk00[4];
    s32 start;      // 0x04
    u8 unk08[4];
    u32 length;     // 0x0c
    u32 limit;      // 0x10
    u32 skip;       // 0x14
    s32 bounded;    // 0x18
};

struct SpanCursor {
    SpanSource *source; // 0x00
    s32 position;       // 0x04
    u32 remaining;      // 0x08
};

extern "C" {

// Build a cursor over the source; when the source is bounded the cursor is advanced by the source's skip count.
SpanCursor FUN_0022bc54(SpanSource *source)
{
    SpanCursor cursor;
    u32 skip = source->skip;
    if (source->bounded == 0) {
        cursor.source = source;
        cursor.position = 0;
        cursor.remaining = skip;
        return cursor;
    }
    if (skip == 0 || skip == source->length) {
        cursor.source = source;
        cursor.position = source->start;
        cursor.remaining = source->length;
    } else if (skip > source->limit) {
        cursor.remaining = skip;
        cursor.source = source;
        cursor.position = source->start + skip;
    } else {
        cursor.source = source;
        cursor.position = source->start + skip;
        cursor.remaining = source->length + skip;
    }
    return cursor;
}

} /* extern "C" */
