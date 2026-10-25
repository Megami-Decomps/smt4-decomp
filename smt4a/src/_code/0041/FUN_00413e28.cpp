#include "common.h"
struct Record { u8 data[184]; };
struct RecordSpan { Record *begin; Record *end; };
struct RecordRange { u8 unk00[232]; RecordSpan span; };
/* Returns the number of records in the range. */
extern "C" s32 FUN_00413e28(RecordRange *range)
{
    const RecordSpan &span = range->span;
    return span.end - span.begin;
}
