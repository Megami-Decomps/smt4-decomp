/* NON_MATCHING: native handle close uses prohibited SVC 0x23; the typed close helper remains out of line. */
#include "common.h"
struct ThreadOwner {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 handle;
};
extern "C" {
void nn_os_Thread_FinalizeImpl(u32 *handle);
s32 nn_svc_CloseHandle(u32 handle);
/* Finalizes the thread and releases any remaining native handle. */
ThreadOwner *FUN_0033b5d8(ThreadOwner *owner)
{
    nn_os_Thread_FinalizeImpl(&owner->handle);
    if (owner->handle)
        nn_svc_CloseHandle(owner->handle);
    owner->handle = 0;
    return owner;
}
}
