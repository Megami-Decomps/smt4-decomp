#include "common.h"

struct Slot2c {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2c */ s32 value;
};

extern "C" {

/* Virtual reset: clears the word at offset 0x2c. */
void FUN_00363820(Slot2c *self)
{
    self->value = 0;
}

} /* extern "C" */
