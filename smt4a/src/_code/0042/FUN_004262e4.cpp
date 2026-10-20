#include "common.h"

extern "C" {

#define RESULT_INVALID_HANDLE 0xE0409FFF

extern s32 FUN_004265bc(void *handle);

/* Forwards a non-NULL handle to FUN_004265bc, otherwise returns the invalid-handle result. */
s32 FUN_004262e4(void *handle)
{
    if (handle == NULL) {
        return RESULT_INVALID_HANDLE;
    }
    return FUN_004265bc(handle);
}

}
