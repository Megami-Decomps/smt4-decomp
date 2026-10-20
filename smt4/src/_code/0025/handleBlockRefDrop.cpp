#include "common.h"

extern "C" {

int asdTextureRelease(u32 item);
int asdMemFree(u32 ptr);

typedef struct Shared {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 count;
    /* 0x10 */ s32 refCount;
    /* 0x14 */ u32 *items;
    /* 0x18 */ u32 buffer;
} Shared;

typedef struct Handle {
    /* 0x0 */ Shared *shared;
} Handle;

/* Drops a reference to the shared block (the last one releases the items and the buffer), then frees the handle. */
void handleBlockRefDrop(Handle *handle)
{
    Shared *shared = handle->shared;
    s32 refs = shared->refCount - 1;
    s32 i;

    shared->refCount = refs;
    if (refs == 0) {
        i = 0;
        if (i < shared->count) {
            do {
                asdTextureRelease(shared->items[i]);
                i++;
            } while (i < shared->count);
        }
        asdMemFree(shared->buffer);
    }
    asdMemFree((u32)handle);
}

} /* extern "C" */
