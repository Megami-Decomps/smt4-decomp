#include "common.h"

struct WordSlotBC {
    /* 0x00 */ u8 unk00[0xbc];
    /* 0xBC */ u32 value;
};

extern "C" {

/* Virtual getter: returns the word at offset 0xBC. */
u32 FUN_00323e44(const WordSlotBC *self)
{
    return self->value;
}

} /* extern "C" */
