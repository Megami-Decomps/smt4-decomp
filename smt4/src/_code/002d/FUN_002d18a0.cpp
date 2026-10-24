#include "common.h"

struct WordSlot24 {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 value;
};

extern "C" {

/* Virtual setter: stores the word at offset 0x24. */
void FUN_002d18a0(WordSlot24 *self, u32 value)
{
    self->value = value;
}

} /* extern "C" */
