#include "shard/Shard0047.h"

extern "C" {

typedef struct HolderOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *holder;
} HolderOwner;

extern void FUN_002371cc(void *holder);
extern void asdMemFree(void *ptr);

void holderOwnerFree(HolderOwner *owner)
{
    if (owner->holder != NULL) {
        FUN_002371cc(owner->holder);
        asdMemFree(owner->holder);
        owner->holder = NULL;
    }
}

} /* extern "C" */
