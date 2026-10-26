/* NON_MATCHING: control flow and layout now match; retail passes the second argument of the 0x16d case in r1 straight from the `subs r1, r1, #109` that tested the id (zero there), so it has no `mov r1, #0` before the call. */
#include "common.h"

extern "C" {
u32 FUN_0014af98(s32 id, u32 variant, u32 context);
void FUN_001628c0(const char* name, u32 resource, s32 mode, s32 flags,
                  f32 scaleX, f32 scaleY);
void FUN_0047e690(s32 slot, s32 id, f32 scale);

// Selects named resources for the two special IDs and forwards all other IDs.
void FUN_0047f08c(s32 id, u32 context)
{
    if (id == 0x16c) {
        FUN_001628c0("I001029", FUN_0014af98(id, context, context),
                     2, 0, 0.707f, 0.707f);
    } else if (id == 0x16d) {
        FUN_001628c0("I001030b", FUN_0014af98(id, 0, context),
                     2, 0, 0.707f, 0.707f);
    } else {
        FUN_0047e690(-1, id, 1.0f);
    }
}
}
