#include "common.h"

struct Slot4 {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ s32 value;
};

extern "C" {

/* Virtual setter: stores the s32 at offset 0x4. */
void FUN_00300154(Slot4 *self, s32 value)
{
    self->value = value;
}

} /* extern "C" */
