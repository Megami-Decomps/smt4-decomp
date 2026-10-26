/* NON_MATCHING: retail stores start, then adds, then stores end as separate str; armcc merges them into add + stm. */
#include "common.h"

struct SpanState {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ u32 start;
    /* 0x20 */ u32 end;
};

/* Sets the span from a start and a length. */
extern "C" void FUN_001cbd84(SpanState *span, u32 start, u32 length)
{
    span->start = start;
    span->end = start + length;
}
