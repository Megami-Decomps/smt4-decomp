#include "common.h"

extern "C" {

#define RESULT_INVALID_HANDLE 0xE0409FFF

extern s32 FUN_00426754(void *object);

/* Forwards the object a non-NULL handle refers to to FUN_00426754, otherwise returns the invalid-handle result. */
s32 FUN_0042640c(void **handle)
{
    if (handle == NULL || *handle == NULL) {
        return RESULT_INVALID_HANDLE;
    }
    return FUN_00426754(*handle);
}

}
