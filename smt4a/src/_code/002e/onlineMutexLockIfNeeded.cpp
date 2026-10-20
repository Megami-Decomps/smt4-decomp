#include "common.h"

extern "C" {

void onlineMutexLock(u8 *member);
s32 onlineMutexNeedsLock(void);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 member04[1];
} Holder;

/* Calls onlineMutexLock on the member at 4 when onlineMutexNeedsLock reports nonzero. */
void onlineMutexLockIfNeeded(Holder *object)
{
    s32 result;

    result = onlineMutexNeedsLock();
    if (result != 0) {
        onlineMutexLock(object->member04);
    }
}

} /* extern "C" */
