#include "common.h"

extern "C" {

struct Owner004a1d04;

typedef struct ChildVtbl004a1d04 {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void (*release)(void *self);
} ChildVtbl004a1d04;

typedef struct Child004a1d04 {
    /* 0x00 */ ChildVtbl004a1d04 *vtbl;
} Child004a1d04;

typedef struct OwnerVtbl004a1d04 {
    /* 0x00 */ void *slots[10];
    /* 0x28 */ void (*stop)(struct Owner004a1d04 *self);
} OwnerVtbl004a1d04;

typedef struct Owner004a1d04 {
    /* 0x000 */ OwnerVtbl004a1d04 *vtbl;
    /* 0x004 */ u32 job;
    /* 0x008 */ u8 unk008[0x8e];
    /* 0x096 */ u8 part[0x7b6];
    /* 0x84c */ Child004a1d04 *child;
} Owner004a1d04;

void jobStop(u32 job, s32 flags);
void FUN_004a6d5c(u8 *part);

/* Shuts the owner down: releases its child, clears its part, runs its stop slot and stops its job. */
void ownerShutdown(Owner004a1d04 *owner)
{
    Child004a1d04 *child = owner->child;

    if (child != NULL) {
        child->vtbl->release(child);
        owner->child = NULL;
    }
    FUN_004a6d5c(owner->part);
    owner->vtbl->stop(owner);
    jobStop(owner->job, 0);
}

} /* extern "C" */
