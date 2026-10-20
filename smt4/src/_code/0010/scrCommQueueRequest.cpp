#include "common.h"

extern "C" {

u32 FUN_002bfdd4(void);
u32 FUN_002bfdc4(void);
s32 FUN_002bfc24(s32 kind, u32 arg, u32 value, u32 flags, f32 scaleX, f32 scaleY);

/* Forwards the request to FUN_002bfc24 with a 0.707 scale on both axes; kinds 1 and 3 also set flag 4. Always returns 1. */
u32 scrCommQueueRequest(s32 kind, u32 arg)
{
    u32 flags = FUN_002bfdd4();

    if (kind == 1 || kind == 3) {
        flags |= 4;
    }
    FUN_002bfc24(kind, arg, FUN_002bfdc4(), flags, 0.707f, 0.707f);
    return 1;
}

} /* extern "C" */
