#include "common.h"

struct Part00219fa8 {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 active;
};

struct Owner00219fa8 {
    /* 0x00 */ u8 unk00[0xc0];
    /* 0xc0 */ Part00219fa8 part;
};

struct Object00219fa8 {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ Owner00219fa8 *owner;
};

extern "C" {

void FUN_0019d9d4(Part00219fa8 *part);

/* Passes the owner's part (0xc0) on when it is active. */
void FUN_00219fa8(Object00219fa8 *object)
{
    Part00219fa8 *part = &object->owner->part;
    if (part->active != 0)
        FUN_0019d9d4(part);
}

} /* extern "C" */
