#include "common.h"

extern "C" {

typedef struct Resource {
    /* 0x00 */ u8 unk00[5];
    /* 0x05 */ u8 state;
    /* 0x06 */ u8 unk06[0x12];
    /* 0x18 */ void *handle;
} Resource;

extern Resource *g_shop;

extern void FUN_003a11f0(void *handle);

/* Releases the shop's resource handle while its state is 0, 1 or 2; returns 0. */
u32 shopMainDrawDown(void)
{
    Resource *resource = g_shop;

    if (resource->state == 0 || resource->state == 1 || resource->state == 2) {
        if (resource != NULL && resource->handle != NULL) {
            FUN_003a11f0(resource->handle);
        }
    }
    return 0;
}

} /* extern "C" */
