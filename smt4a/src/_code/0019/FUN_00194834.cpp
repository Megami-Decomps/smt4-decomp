#include "common.h"

extern "C" {

typedef struct Handle {
    u8 unk00[4];
    u32 id;      /* 0x04 */
    u8 enabled;  /* 0x08 */
} Handle;

extern s32 FUN_001a8f3c(u32 id);

/* Forwards the handle's id when it is enabled, else returns 0. */
s32 FUN_00194834(Handle *handle)
{
    if (handle->enabled == 0) {
        return 0;
    }
    return FUN_001a8f3c(handle->id);
}

} /* extern "C" */
