#include "common.h"

extern "C" {

typedef struct Resource {
    /* 0x00 */ u8 unk00[5];
    /* 0x05 */ u8 state;
    /* 0x06 */ u8 unk06[0x12];
    /* 0x18 */ void *handle;
} Resource;

typedef struct ResourceHolder {
    /* 0x0 */ Resource *resource;
} ResourceHolder;

extern void FUN_003a11f0(void *handle);

/* Releases the holder's resource handle while its state is 0, 1 or 2; returns 0. */
u32 resourceHolderReleaseHandle(ResourceHolder *holder)
{
    Resource *resource = holder->resource;

    if (resource->state == 0 || resource->state == 1 || resource->state == 2) {
        if (resource != NULL && resource->handle != NULL) {
            FUN_003a11f0(resource->handle);
        }
    }
    return 0;
}

} /* extern "C" */
