#include "common.h"

extern "C" {

void FUN_001800b8(u32 handle);
void asdMemFree(void *memory);

typedef struct Shared {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 count;
    /* 0x08 */ u8 unk08[0x0C];
    /* 0x14 */ u32 *handles;
    /* 0x18 */ u8 unk18[4];
    /* 0x1C */ s32 refCount;
    /* 0x20 */ u8 unk20[4];
    /* 0x24 */ void *buffer;
} Shared;

/* Drops one reference: on the last one releases the handles and the buffer. */
void FUN_00222434(Shared *shared)
{
    s32 remaining;
    u32 i;

    remaining = shared->refCount - 1;
    shared->refCount = remaining;
    if (remaining == 0) {
        for (i = 0; i < shared->count; i++) {
            FUN_001800b8(shared->handles[i]);
        }
        asdMemFree(shared->buffer);
        return;
    }
}

} /* extern "C" */
