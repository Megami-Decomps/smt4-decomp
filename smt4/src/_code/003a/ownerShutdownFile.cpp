#include "common.h"

extern "C" {

struct Owner003a8c64;

typedef struct ChildVtbl003a8c64 {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void (*release)(void *self);
} ChildVtbl003a8c64;

typedef struct Child003a8c64 {
    /* 0x00 */ ChildVtbl003a8c64 *vtbl;
} Child003a8c64;

typedef struct OwnerVtbl003a8c64 {
    /* 0x00 */ void *slots[10];
    /* 0x28 */ void (*stop)(struct Owner003a8c64 *self);
} OwnerVtbl003a8c64;

typedef struct Owner003a8c64 {
    /* 0x000 */ OwnerVtbl003a8c64 *vtbl;
    /* 0x004 */ u32 job;
    /* 0x008 */ u8 unk008[0x8e];
    /* 0x096 */ u8 part[0x4fa];
    /* 0x590 */ Child003a8c64 *child;
    /* 0x594 */ u8 unk594[0x10];
    /* 0x5a4 */ u8 busy;
} Owner003a8c64;

void jobStop(u32 job, s32 flags);
void fileSlotFree(s32 slot);
void indexedSlotsClear(u8 *part);
void soundRequestEnd(void);

/* Shuts the owner down: releases its child, clears its part, runs its stop slot, frees file slot 0x22 and stops its job. */
void ownerShutdownFile(Owner003a8c64 *owner)
{
    Child003a8c64 *child = owner->child;

    if (child != NULL) {
        child->vtbl->release(child);
        owner->child = NULL;
    }
    indexedSlotsClear(owner->part);
    if (owner->busy == 1) {
        soundRequestEnd();
    }
    owner->vtbl->stop(owner);
    fileSlotFree(0x22);
    jobStop(owner->job, 0);
}

} /* extern "C" */
