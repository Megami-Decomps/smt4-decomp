/* NON_MATCHING: register allocation only: retail keeps the lock pointer in r4 and the data pointer in r5 (swapped here) */
/* Runs FUN_00431f04 on the owner's data block while holding the owner's lock; returns its result. */
#include "common.h"

extern "C" {

typedef struct Owner {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ u8 data[0x58];
    /* 0xE0 */ u8 lock[1];      /* CriticalSection */
} Owner;

typedef struct OwnerHolder {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Owner *owner;
} OwnerHolder;

extern OwnerHolder g_asdMemory;

extern void nn_os_CriticalSection_Enter(void *cs);
extern void nn_os_CriticalSection_Leave(void *cs);
extern u32 FUN_00431f04(void *data);

u32 FUN_00359334(void)
{
    void *lock = g_asdMemory.owner->lock;
    void *data = g_asdMemory.owner->data;
    u32 result;

    nn_os_CriticalSection_Enter(lock);
    result = FUN_00431f04(data);
    nn_os_CriticalSection_Leave(lock);
    return result;
}

}
