#include "sys/AtomicCounter.h"

extern "C" {

typedef struct SharedRef {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ s32 refCount;
} SharedRef;

typedef struct RefHolder {
    /* 0x00 */ u8 unk00[0x74];
    /* 0x74 */ SharedRef *ref;
} RefHolder;

extern void sharedRefRelease(SharedRef *ref);

/* Replaces the holder's shared reference with `ref`: releases the old one and takes a reference on the new one. */
void sharedRefHolderReplace(RefHolder *holder, SharedRef *ref)
{
    SharedRef *old = holder->ref;

    if (old != NULL) {
        sharedRefRelease(old);
        holder->ref = NULL;
    }
    if (ref != NULL) {
        s32 *counter = &ref->refCount;

        holder->ref = ref;
        atomicAddS32(counter, 1);
    }
}

} /* extern "C" */
