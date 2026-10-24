#include "common.h"

struct FloatSlot20 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ f32 value;
};

extern "C" {

/* Virtual setter: stores the float at offset 0x20. */
void FUN_00219874(FloatSlot20 *self, f32 value)
{
    self->value = value;
}

} /* extern "C" */
