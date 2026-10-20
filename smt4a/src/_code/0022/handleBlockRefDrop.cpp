#include "common.h"

extern "C" {

void asdTextureRelease(u32 handle);
void asdMemFree(void *memory);

typedef struct Shared {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s32 count;
    /* 0x10 */ s32 refCount;
    /* 0x14 */ u32 *handles;
    /* 0x18 */ void *buffer;
} Shared;

/* Drops one reference to the shared block `*ref`: on the last one releases its handles and buffer; then frees the reference itself. */
void handleBlockRefDrop(Shared **ref)
{
    s32 remaining;
    Shared *shared;
    s32 i;

    shared = *ref;
    remaining = shared->refCount - 1;
    shared->refCount = remaining;
    if (remaining == 0) {
        i = 0;
        if (i < shared->count) {
            do {
                asdTextureRelease(shared->handles[i]);
                i = i + 1;
            } while (i < shared->count);
        }
        asdMemFree(shared->buffer);
    }
    asdMemFree(ref);
}

} /* extern "C" */
