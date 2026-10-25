/* Runs FUN_00431f04 on the owner's data block while holding the owner's lock; returns its result. */
#include "common.h"
#include "shard/W6_W6Match1_CriticalSection.h"

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

extern u32 FUN_00431f04(void *data);

u32 FUN_00359334(void)
{
    Owner *owner = g_asdMemory.owner;
    void *data = owner->data;
    ScopedCriticalLock lock(owner->lock);
    return FUN_00431f04(data);
}

}
