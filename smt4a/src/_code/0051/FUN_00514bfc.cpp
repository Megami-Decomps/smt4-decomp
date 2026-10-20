/* NON_MATCHING: register allocation only: retail keeps the owner in r5 and the lock pointer in r4 (swapped here) */
/* Calls FUN_001a1244 on the owner's data while holding the owner's lock. */
#include "common.h"

extern "C" {

typedef struct Owner {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ u8 lock[1];      /* CriticalSection */
} Owner;

typedef struct Handle {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Owner *owner;
} Handle;

extern void nn_os_CriticalSection_Enter(void *cs);
extern void nn_os_CriticalSection_Leave(void *cs);
extern void FUN_001a1244(Owner *owner, u32 arg);

void FUN_00514bfc(Handle *handle, u32 arg)
{
    Owner *owner = handle->owner;
    void *lock = owner->lock;

    nn_os_CriticalSection_Enter(lock);
    FUN_001a1244(owner, arg);
    nn_os_CriticalSection_Leave(lock);
}

}
