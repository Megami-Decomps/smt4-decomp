/* NON_MATCHING: the 64-bit limit compare now matches (sbcs/movlt); retail reads the limit as two ldr and updates `used` then `total` with ldrd/strd through r2:r3 and r4:r5, the build reads both with ldm and hoists the `total` load above the `used` store. Declaring `total` volatile gives IDENTICAL (retail keeps its load after the `used` store), but nothing yet shows another thread reads it, so it is not applied. */
#include "common.h"
#include "nn/Result.h"
#include "nn/svc.h"
#include "sys/ResultReport.h"

struct EventCounters {
    /* 0x00 */ s64 total;
    /* 0x08 */ s64 unk08;
    /* 0x10 */ s64 limit;
    /* 0x18 */ s64 used;
    /* 0x20 */ u8 unk20[0x2c];
    /* 0x4c */ u32 event;
};

extern "C" {

/* Adds `count` to the event's counters and signals it; returns 0 when the count does not fit the limit. */
u32 FUN_0038a5f4(EventCounters *counters, u32 count)
{
    if (counters->limit - counters->used < (s64)count) {
        return 0;
    }
    counters->used += count;
    counters->total += count;
    s32 result = nn::svc::SignalEvent(counters->event);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        resultHandleFailure(result, failed);
    }
    return 1;
}
}
