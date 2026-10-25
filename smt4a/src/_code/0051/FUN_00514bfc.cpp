/* Calls FUN_001a1244 on the owner's data while holding the owner's lock. */
#include "common.h"
#include "shard/W6_W6Match1_CriticalSection.h"

extern "C" {

typedef struct Owner {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ u8 lock[1];      /* CriticalSection */
} Owner;

typedef struct Handle {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Owner *owner;
} Handle;

extern void FUN_001a1244(Owner *owner, u32 arg);

void FUN_00514bfc(Handle *handle, u32 arg)
{
    Owner *owner = handle->owner;
    ScopedCriticalLock lock(owner->lock);
    FUN_001a1244(owner, arg);
}

}
