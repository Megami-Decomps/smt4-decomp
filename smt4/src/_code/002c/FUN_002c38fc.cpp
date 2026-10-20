#include "common.h"

extern "C" {

extern void nn_os_SimpleLock_Initialize(void *lock);

typedef struct Lock {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 unk4;
    /* 0x8 */ u32 unk8;
} Lock;

void FUN_002c38fc(Lock *lock)
{
    nn_os_SimpleLock_Initialize(lock);
    lock->unk4 = 0;
    lock->unk8 = 0;
}

} /* extern "C" */
