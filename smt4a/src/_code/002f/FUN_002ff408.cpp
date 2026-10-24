#include "common.h"

struct Part002ff408 {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 active;
};

struct Owner002ff408 {
    /* 0x00 */ u8 unk00[0xc0];
    /* 0xc0 */ Part002ff408 part;
};

struct Object002ff408 {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ Owner002ff408 *owner;
};

extern "C" {

void FUN_00221ddc(Part002ff408 *part);

/* Passes the owner's part (0xc0) on when it is active. */
void FUN_002ff408(Object002ff408 *object)
{
    Part002ff408 *part = &object->owner->part;
    if (part->active != 0)
        FUN_00221ddc(part);
}

} /* extern "C" */
