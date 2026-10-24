#include "common.h"

struct Slot10 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 value;
};

extern "C" {

/* Virtual setter: stores the s32 at offset 0x10. */
void FUN_001f67e4(Slot10 *self, s32 value)
{
    self->value = value;
}

} /* extern "C" */
