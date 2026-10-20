#include "common.h"

extern "C" {

typedef struct Child Child;
typedef struct Owner Owner;

typedef struct ChildVtable {
    /* 0x00 */ void (*unk00)(Child *child);
    /* 0x04 */ void (*release)(Child *child);
} ChildVtable;

struct Child {
    /* 0x0 */ ChildVtable *vtable;
};

typedef struct OwnerVtable {
    /* 0x00 */ void (*unk00[10])(Owner *owner);
    /* 0x28 */ void (*stop)(Owner *owner);
} OwnerVtable;

struct Owner {
    /* 0x000 */ OwnerVtable *vtable;
    /* 0x004 */ u32 job;
    /* 0x008 */ u8 unk008[0x8E];
    /* 0x096 */ u8 list[0x4FA];
    /* 0x590 */ Child *child;
};

void FUN_003aabd8(u8 *list);
s32 jobStop(u32 job, s32 arg);

/* Releases the child, clears the list, runs the owner's stop handler and stops its job. */
void FUN_003a7254(Owner *owner)
{
    Child *child = owner->child;

    if (child != NULL) {
        child->vtable->release(child);
        owner->child = NULL;
    }
    FUN_003aabd8(owner->list);
    owner->vtable->stop(owner);
    jobStop(owner->job, 0);
}

} /* extern "C" */
