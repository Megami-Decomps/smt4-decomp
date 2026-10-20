#include "common.h"

extern "C" {

int FUN_00126e5c(int handle, int state);

typedef struct Handle {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 id;
    /* 0x10 */ u8 unk10[0x14];
    /* 0x24 */ u8 state;
    /* 0x25 */ u8 done;
} Handle;

/* When the handle is valid and in state 1, hands it to FUN_00126e5c and marks it done. */
void mobiclipPlayerReleaseHandle(Handle *handle)
{
    if (handle->id != -1 && handle->state == 1) {
        FUN_00126e5c(handle->id, handle->state);
        handle->state = 0;
        handle->done = 1;
    }
}

} /* extern "C" */
