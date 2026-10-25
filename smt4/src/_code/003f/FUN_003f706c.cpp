/* Calls FUN_002b3194 on the owner's data while holding the owner's lock. */
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

extern void FUN_002b3194(Owner *owner, u32 arg);

void FUN_003f706c(Handle *handle, u32 arg)
{
    Owner *owner = handle->owner;
    ScopedCriticalLock lock(owner->lock);
    FUN_002b3194(owner, arg);
}

}
