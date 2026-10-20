#include "common.h"

extern "C" {

typedef struct Handle {
    u8 unk00[4];
    u32 id;      /* 0x04 */
    u8 enabled;  /* 0x08 */
} Handle;

extern s32 FUN_0014d5a8(u32 id);

/* Forwards the handle's id when it is enabled, else returns 0. */
s32 FUN_002ac5d8(Handle *handle)
{
    if (handle->enabled == 0) {
        return 0;
    }
    return FUN_0014d5a8(handle->id);
}

} /* extern "C" */
