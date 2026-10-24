#include "common.h"

struct Slot2c {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2c */ s32 value;
};

extern "C" {

/* Virtual getter: returns the s32 at offset 0x2c. */
s32 FUN_002cda0c(Slot2c *self)
{
    return self->value;
}

} /* extern "C" */
