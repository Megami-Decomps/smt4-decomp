/* NON_MATCHING: compiler rotates the countdown loop differently and emits mov rather than retail's Thumb movs. */
#include "common.h"

namespace {
typedef void (*CursorCallback)(u32 code, void *context);
struct Cursor {
    u32 flags;
    CursorCallback callback;
    void *context;
    u8 padding[0xc];
    s32 remaining;
    u32 unknown;
    u32 count;
};
}

extern "C" {
/* Emits padding bytes through the cursor callback. */
void FUN_002e3216(Cursor *cursor)
{
    s32 remaining = cursor->remaining;
    if ((cursor->flags & 1) == 0) {
        return;
    }
    while (--remaining >= 0) {
        cursor->callback(32, cursor->context);
        cursor->count++;
    }
}
}
