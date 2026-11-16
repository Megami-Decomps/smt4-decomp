#include "common.h"

struct Part00362550 {
    /* 0x00 */ s32 count;
    /* 0x04 */ u8 unk04[8];
    /* 0x0c */ u32 flags;
};

struct Owner00362550 {
    /* 0x00 */ u8 unk00[0xc0];
    /* 0xc0 */ Part00362550 part;
};

struct Object00362550 {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ Owner00362550 *owner;
};

extern "C" {

/* Walks the part's entries once its flag byte is set; the per-entry work is compiled out of this
 * build, only the counting loop remains. */
void FUN_00362550(Object00362550 *object)
{
    Part00362550 *part = &object->owner->part;
    if ((part->flags & 0xff000000) != 0) {
        s32 i = 0;
        while (i < part->count)
            i++;
    }
}

} /* extern "C" */
