#include "common.h"

struct WordSlot2C {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2C */ u32 value;
};

extern "C" {

/* Virtual slot: clears the word at offset 0x2C. */
void FUN_001e19b8(WordSlot2C *self)
{
    self->value = 0;
}

} /* extern "C" */
