#include "common.h"
#include "mobiclip_ctrl/helper_S4Player.h"
#include "nn/os/ProcessEventIpc.h"

extern "C" {

#define RESULT_INVALID_HANDLE 0xE0409FFF

/* Registers a nonzero event handle; otherwise returns the invalid-handle result. */
s32 FUN_0042640c(void **handle)
{
    if (handle == NULL || *handle == NULL) {
        return RESULT_INVALID_HANDLE;
    }
    return FUN_00426754((u32)*handle);
}

} /* extern "C" */
