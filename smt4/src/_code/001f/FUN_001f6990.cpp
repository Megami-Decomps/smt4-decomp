#include "common.h"

struct FloatSlot14 {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ f32 value;
};

extern "C" {

/* Virtual setter: stores the float at offset 0x14. */
void FUN_001f6990(FloatSlot14 *self, f32 value)
{
    self->value = value;
}

} /* extern "C" */
