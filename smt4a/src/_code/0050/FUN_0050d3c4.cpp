#include "common.h"

struct WordSlot40 {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ u32 value;
};

extern "C" {

/* Virtual getter: returns the word at offset 0x40. */
u32 FUN_0050d3c4(const WordSlot40 *self)
{
    return self->value;
}

} /* extern "C" */
