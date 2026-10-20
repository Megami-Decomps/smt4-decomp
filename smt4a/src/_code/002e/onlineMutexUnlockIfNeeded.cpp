#include "common.h"

extern "C" {

void onlineMutexUnlock(u8 *member);
s32 onlineMutexNeedsLock(void);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 member04[1];
} Holder;

/* Calls onlineMutexUnlock on the member at 4 when onlineMutexNeedsLock reports nonzero. */
void onlineMutexUnlockIfNeeded(Holder *object)
{
    s32 result;

    result = onlineMutexNeedsLock();
    if (result != 0) {
        onlineMutexUnlock(object->member04);
    }
}

} /* extern "C" */
