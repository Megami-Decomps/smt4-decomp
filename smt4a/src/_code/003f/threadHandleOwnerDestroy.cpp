#include "common.h"

extern "C" {

struct HandleOwner { u8 unk00[0x3c]; u32 handle; };
void nn_os_Thread_FinalizeImpl(u32 *handle);
s32 svcCloseHandle(u32 handle);

HandleOwner *threadHandleOwnerDestroy(HandleOwner *owner)
{
    u32 *handle = &owner->handle;

    nn_os_Thread_FinalizeImpl(handle);
    if (*handle != 0) {
        svcCloseHandle(*handle);
        *handle = 0;
    }
    return owner;
}

} /* extern "C" */
