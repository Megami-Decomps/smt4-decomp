#include "common.h"

extern "C" {

typedef struct Shared {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s32 refCount;
} Shared;

typedef struct SharedRef {
    /* 0x00 */ Shared *shared;
} SharedRef;

/* Copy constructor of a counted reference: shares the object and bumps its reference count. */
SharedRef *sharedRefCopy(SharedRef *dest, const SharedRef *source)
{
    Shared *shared = source->shared;

    dest->shared = shared;
    shared->refCount = shared->refCount + 1;
    return dest;
}

} /* extern "C" */
