/* NON_MATCHING: retail loads/stores the 64-bit counters with ldrd/strd (8-byte aligned pair accesses) and reads the limit as two words; the build uses ldm/stm. Arithmetic and svc 0x18 (nn::svc::SignalEvent) match. */
#include "common.h"
#include "nn/Result.h"
#include "nn/svc.h"

struct EventCounters {
    /* 0x00 */ s64 total;
    /* 0x08 */ s64 unk08;
    /* 0x10 */ s64 limit;
    /* 0x18 */ s64 used;
    /* 0x20 */ u8 unk20[0x2c];
    /* 0x4c */ u32 event;
};

extern "C" {
void FUN_002e3140(s32 result, bool failed);

/* Adds `count` to the event's counters and signals it; returns 0 when the count does not fit the limit. */
u32 FUN_0038a5f4(EventCounters *counters, u32 count)
{
    if (counters->limit - counters->used - count < 0) {
        return 0;
    }
    counters->used += count;
    counters->total += count;
    s32 result = nn::svc::SignalEvent(counters->event);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        FUN_002e3140(result, failed);
    }
    return 1;
}
}
