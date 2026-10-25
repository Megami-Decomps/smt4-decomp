#include "common.h"

// A 64-bit handle that is cleared one word at a time.
union WideHandle {
    u64 value;
    struct {
        u32 low;
        u32 high;
    } words;
};

extern "C" {
void FUN_00429d58(u64 handle);

/* Release a nonzero wide handle and clear its owner. */
void recordClearWideHandle(WideHandle *handle)
{
    if (handle->value != 0) {
        FUN_00429d58(handle->value);
        handle->words.low = 0;
        handle->words.high = 0;
    }
}
}
