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

/* Walks the part's entries once its flag byte is set; the per-entry work is compiled out of this
 * build, only the counting loop remains. */
void FUN_002e6f74(Object002e6f74 *object)
{
    Part002e6f74 *part = &object->owner->part;
    if ((part->flags & 0xff000000) != 0) {
        s32 i = 0;
        while (i < part->count)
            i++;
    }
}

} /* extern "C" */
