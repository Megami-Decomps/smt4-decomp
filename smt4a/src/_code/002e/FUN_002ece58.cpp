#include "common.h"

extern "C" {

void sharedRefRelease(void);

typedef struct Part {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 handle;
} Part;

typedef struct Holder {
    /* 0x00 */ u8 unk00[0xC0];
    /* 0xC0 */ Part part;
} Holder;

/* Releases the handle of the part at 0xC0 (if any), stores `handle` in its place and returns 1. */
u32 FUN_002ece58(Holder *object, u32 handle)
{
    Part *part = &object->part;

    if (part->handle != 0) {
        sharedRefRelease();
    }
    part->handle = handle;
    return 1;
}

} /* extern "C" */
