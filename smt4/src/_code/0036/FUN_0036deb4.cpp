#include "common.h"

struct WordSlot1C {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1C */ u32 value;
};

extern "C" {

/* Virtual getter: returns the word at offset 0x1C. */
u32 FUN_0036deb4(const WordSlot1C *self)
{
    return self->value;
}

} /* extern "C" */
