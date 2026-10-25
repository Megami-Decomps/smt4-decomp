/* NON_MATCHING: constant materialisation only: retail keeps the constant 1 for the done flag in r5 from the start (push {r4-r6,lr}); the build loads it at the end */
#include "common.h"

extern "C" {

typedef struct ChildVtbl004188ec {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void (*release)(void *self);
    /* 0x08 */ void *unk08;
    /* 0x0c */ void (*update)(void *self);
    /* 0x10 */ void (*stop)(void *self);
} ChildVtbl004188ec;

typedef struct Child004188ec {
    /* 0x00 */ ChildVtbl004188ec *vtbl;
    /* 0x04 */ u8 complete;
} Child004188ec;

typedef struct Owner004188ec {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 done;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ Child004188ec *child;
} Owner004188ec;

/* Updates the child and releases it once its completion flag is set. Marks the owner done unless a child is still pending. */
void ownerUpdateChild(Owner004188ec *owner)
{
    Child004188ec *child = owner->child;

    if (child != NULL) {
        child->vtbl->update(child);
        child = owner->child;
        if (child != NULL) {
            if (child->complete == 0) {
                return;
            }
            child->vtbl->stop(child);
            if (owner->child != NULL) {
                owner->child->vtbl->release(owner->child);
            }
            owner->child = NULL;
        }
    }
    owner->done = 1;
}

} /* extern "C" */
