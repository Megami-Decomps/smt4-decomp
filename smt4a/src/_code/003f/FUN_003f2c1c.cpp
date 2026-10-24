/* NON_MATCHING: retail uses `push {r4, r5, r6, lr}` where armcc emits `push {r4, lr}`. */
#include "common.h"

extern "C" {

struct HandleOwner { u8 unk00[0x3c]; u32 handle; };
void nn_os_Thread_FinalizeImpl(u32 *handle);
s32 svcCloseHandle(u32 handle);

HandleOwner *FUN_003f2c1c(HandleOwner *owner)
{
    nn_os_Thread_FinalizeImpl(&owner->handle);
    if (owner->handle != 0) {
        svcCloseHandle(owner->handle);
        owner->handle = 0;
    }
    return owner;
}

} /* extern "C" */
