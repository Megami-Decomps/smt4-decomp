/* NON_MATCHING: retail keeps the part pointer in r0 and starts the counter in the same register; built allocates the part to r1 (the counter's value is never defined on the skipped path). */
#include "common.h"

struct Part002e6f74 {
    /* 0x00 */ s32 count;
    /* 0x04 */ u8 unk04[8];
    /* 0x0c */ u32 flags;
};

struct Owner002e6f74 {
    /* 0x00 */ u8 unk00[0xc0];
    /* 0xc0 */ Part002e6f74 part;
};

struct Object002e6f74 {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ Owner002e6f74 *owner;
};

extern "C" {

/* Counts up to the part's entry count (0xc0) when its flag byte is set. */
s32 FUN_002e6f74(Object002e6f74 *object)
{
    Part002e6f74 *part = &object->owner->part;
    s32 i;
    if ((part->flags & 0xff000000) != 0) {
        i = 0;
        while (i < part->count)
            i++;
    }
    return i;
}

} /* extern "C" */
