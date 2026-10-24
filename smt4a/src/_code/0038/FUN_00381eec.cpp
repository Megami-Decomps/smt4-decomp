#include "common.h"

struct WordSlot4 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 value;
};

extern "C" {

/* Virtual setter: stores the word at offset 0x4. */
void FUN_00381eec(WordSlot4 *self, u32 value)
{
    self->value = value;
}

} /* extern "C" */
