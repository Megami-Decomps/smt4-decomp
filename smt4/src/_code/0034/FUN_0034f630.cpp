#include "common.h"

extern "C" {

int sndVoiceStart(int id);

typedef struct Handle {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ int id;
    /* 0x10 */ u8 unk10[0x14];
    /* 0x24 */ u8 state;
    /* 0x25 */ u8 done;
} Handle;

void FUN_0034f630(Handle *handle)
{
    if ((handle->id != -1) && (handle->state == 0)) {
        sndVoiceStart(handle->id);
        handle->state = 1;
        handle->done = 0;
    }
}

} /* extern "C" */
