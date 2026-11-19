/* NON_MATCHING: retail compares skip against length in ip (kept for the last arm), computes start + skip once
 * before the skip > limit test and predicates that arm (strhi/stmhi); the build branches and splits the stores. */
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
    SpanCursor(SpanSource *source, s32 position, u32 remaining)
        : source(source), position(position), remaining(remaining) {}
    SpanSource *source; // 0x00
    s32 position;       // 0x04
    u32 remaining;      // 0x08
};

extern "C" {

// Build a cursor over the source; when the source is bounded the cursor is advanced by the source's skip count.
SpanCursor FUN_0022bc54(SpanSource *source)
{
    u32 skip = source->skip;
    if (source->bounded == 0)
        return SpanCursor(source, 0, skip);
    if (skip == 0 || skip == source->length)
        return SpanCursor(source, source->start, source->length);
    if (skip > source->limit)
        return SpanCursor(source, source->start + skip, skip);
    return SpanCursor(source, source->start + skip, source->length + skip);
}
} /* extern "C" */
