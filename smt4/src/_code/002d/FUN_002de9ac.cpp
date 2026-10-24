#include "common.h"

struct WordSlot30 {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ u32 value;
};

extern "C" {

/* Virtual setter: stores the word at offset 0x30. */
void FUN_002de9ac(WordSlot30 *self, u32 value)
{
    self->value = value;
}

} /* extern "C" */
