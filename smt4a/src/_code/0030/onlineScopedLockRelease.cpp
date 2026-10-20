#include "common.h"

extern "C" {

void FUN_0010d2a6(u32 handle);
s32 onlineMutexNeedsLock(u32 handle);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 active;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 handle;
} Holder;

/* If active: runs FUN_0010d2a6 on the handle when onlineMutexNeedsLock accepts it, then clears `active`. */
void onlineScopedLockRelease(Holder *object)
{
    s32 accepted;
    u32 handle;

    if (object->active != 0) {
        handle = object->handle;
        accepted = onlineMutexNeedsLock(handle);
        if (accepted != 0) {
            FUN_0010d2a6(handle);
        }
        object->active = 0;
    }
}

} /* extern "C" */
