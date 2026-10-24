#include "common.h"

struct Slot44 {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ s8 value;
};

extern "C" {

/* Virtual getter: returns the s8 at offset 0x44. */
s8 FUN_0050d3bc(Slot44 *self)
{
    return self->value;
}

} /* extern "C" */
