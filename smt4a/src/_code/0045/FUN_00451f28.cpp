#include "common.h"

struct Slotc {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ s32 value;
};

extern "C" {

/* Virtual reset: clears the word at offset 0xc. */
void FUN_00451f28(Slotc *self)
{
    self->value = 0;
}

} /* extern "C" */
