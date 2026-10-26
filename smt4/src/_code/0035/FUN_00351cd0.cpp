#include "common.h"

extern "C" {

#define RESULT_INVALID_HANDLE 0xE0409FFF

extern s32 FUN_00351fb8(void *handle);

/* Forwards a non-NULL handle to FUN_00351fb8, otherwise returns the invalid-handle result. */
s32 FUN_00351cd0(void *handle)
{
    if (handle == NULL) {
        return RESULT_INVALID_HANDLE;
    }
    return FUN_00351fb8(handle);
}

}
