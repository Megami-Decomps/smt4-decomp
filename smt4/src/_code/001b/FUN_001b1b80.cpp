#include "common.h"

struct Slot1c {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ s32 value;
};

extern "C" {

/* Virtual reset: clears the word at offset 0x1c. */
void FUN_001b1b80(Slot1c *self)
{
    self->value = 0;
}

} /* extern "C" */
