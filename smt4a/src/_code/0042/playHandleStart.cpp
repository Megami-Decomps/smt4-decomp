#include "shard/Shard0042.h"

extern "C" {

typedef struct PlayHandle {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 handle;
    /* 0x10 */ u8 unk10[0x14];
    /* 0x24 */ u8 started;
    /* 0x25 */ u8 unk25;
} PlayHandle;

extern void FUN_0016cbf8(u32 handle);

void playHandleStart(PlayHandle *obj)
{
    if (obj->handle != -1 && obj->started == 0) {
        FUN_0016cbf8(obj->handle);
        obj->started = 1;
        obj->unk25 = 0;
    }
}

} /* extern "C" */
