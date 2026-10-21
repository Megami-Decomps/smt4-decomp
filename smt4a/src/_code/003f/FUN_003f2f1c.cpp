/* NON_MATCHING: retail uses `push {r4, r5, r6, lr}` where armcc emits `push {r4, lr}`. */
#include "common.h"

extern "C" {

struct Owner { u32 unk00; u32 handle; };
void resetFlag5891A4And65f8(void);
s32 svcCloseHandle(u32 handle);

s32 FUN_003f2f1c(Owner *owner)
{
    if (owner->handle != 0) {
        resetFlag5891A4And65f8();
        svcCloseHandle(owner->handle);
        owner->handle = 0;
    }
    return 0;
}

} /* extern "C" */
