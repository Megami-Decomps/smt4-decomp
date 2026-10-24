#include "common.h"

struct ScalarParameter {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 unk04;
    /* 0x08 */ f32 value;
};

extern "C" {

/* Virtual slot: resets the scalar parameter to 0. */
void _ZN9Obj557b285slot7Ev(ScalarParameter *self)
{
    self->unk04 = 0;
    self->value = 0.0f;
}

} /* extern "C" */
