/* NON_MATCHING: range predicate inlining folds the group shift and changes upper-bound comparisons and constant placement. */
#include "common.h"
#include "shard/FUN_002f530c.h"

static inline bool eventIsInRange(u32 event, s32 group, s32 first, s32 last)
{
    if ((s32)((event & 0x3FC00) >> 10) != group) {
        return false;
    }
    s32 index = event & 0x3FF;
    if (index < first || index > last) {
        return false;
    }
    return true;
}

extern "C" {
u32 FUN_001db8fc(void);

// Classify the current packed event and optionally display its restriction message.
u32 FUN_00214950(u32 context, s32 message)
{
    u32 result = 2;
    s32 event = FUN_001db8fc();
    if ((s32)(event & 0x80000000) >= 0) {
        return 0;
    }
    if (eventIsInRange(event, 17, 100, 179)) {
        result = 3;
    } else if (eventIsInRange(event, 17, 180, 199)) {
        // These events retain the default classification.
    } else if (eventIsInRange(event, 17, 390, 399)) {
        if (message != 0) {
            FUN_002f530c(0, message);
        }
        result = 1;
    } else if (eventIsInRange(event, 17, 230, 339)) {
        // These events retain the default classification.
    } else if (eventIsInRange(event, 17, 200, 219)) {
        if (message != 0) {
            FUN_002f530c(0, message);
        }
        result = 1;
    }
    return result;
}
}
