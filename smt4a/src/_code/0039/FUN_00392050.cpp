#include "common.h"

struct Slot24 {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ s32 value;
};

extern "C" {

/* Virtual setter: stores the s32 at offset 0x24. */
void FUN_00392050(Slot24 *self, s32 value)
{
    self->value = value;
}

} /* extern "C" */
