#include "common.h"

struct Part002198d4 {
    /* 0x00 */ s32 count;
    /* 0x04 */ u8 unk04[8];
    /* 0x0c */ u32 flags;
};

struct Owner002198d4 {
    /* 0x00 */ u8 unk00[0xc0];
    /* 0xc0 */ Part002198d4 part;
};

struct Object002198d4 {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ Owner002198d4 *owner;
};

extern "C" {

/* Walks the part's entries once its flag byte is set; the per-entry work is compiled out of this
 * build, only the counting loop remains. */
void FUN_002198d4(Object002198d4 *object)
{
    Part002198d4 *part = &object->owner->part;
    if ((part->flags & 0xff000000) != 0) {
        s32 i = 0;
        while (i < part->count)
            i++;
    }
}

} /* extern "C" */
