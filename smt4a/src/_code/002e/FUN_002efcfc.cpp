#include "common.h"

extern "C" {

void onlineGetActiveLock(void);
void onlineMutexLockIfNeeded(void);

typedef struct Inner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 value;
} Inner;

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ Inner *inner;
} Holder;

/* Runs onlineGetActiveLock and onlineMutexLockIfNeeded, then copies the word at 8 of the holder's inner object to `*out`. */
void FUN_002efcfc(u32 *out, Holder *holder)
{
    onlineGetActiveLock();
    onlineMutexLockIfNeeded();
    *out = holder->inner->value;
}

} /* extern "C" */
