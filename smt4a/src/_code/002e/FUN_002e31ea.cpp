/* NON_MATCHING: compiler rotates the padding loop differently and emits Thumb mov instead of movs. */
#include "common.h"

namespace { typedef void (*Writer)(u32 character, void *context); struct Cursor { u32 flags; Writer writer; void *context; u8 padding[0xc]; s32 remaining; u32 unknown; u32 count; }; }

extern "C" {
/* Reads or updates the requested task state. */
void FUN_002e31ea(Cursor *cursor)
{
    s32 remaining = cursor->remaining;
    u32 character = cursor->flags & 0x10 ? 48 : 32;
    if (cursor->flags & 1) {
        return;
    }
    while (--remaining >= 0) {
        cursor->writer(character, cursor->context);
        cursor->count++;
    }
}
}
