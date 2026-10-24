#include "common.h"

struct WordSlot9C {
    /* 0x00 */ u8 unk00[0x9c];
    /* 0x9C */ u32 value;
};

extern "C" {

u32 FUN_003b2508(u32 value);

/* Passes the word at offset 0x9C on to FUN_003b2508. */
u32 FUN_003aa85c(const WordSlot9C *self)
{
    return FUN_003b2508(self->value);
}

} /* extern "C" */
