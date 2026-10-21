/* NON_MATCHING: retail uses `push {r4, r5, r6, lr}` where armcc emits `push {r4, lr}`. */
#include "common.h"

extern "C" {

struct HandleOwner { u8 unk00[0x3c]; u32 handle; };
void FUN_001a0d08(u32 *handle);
s32 svcCloseHandle(u32 handle);

HandleOwner *FUN_003f2c1c(HandleOwner *owner)
{
    FUN_001a0d08(&owner->handle);
    if (owner->handle != 0) {
        svcCloseHandle(owner->handle);
        owner->handle = 0;
    }
    return owner;
}

} /* extern "C" */
