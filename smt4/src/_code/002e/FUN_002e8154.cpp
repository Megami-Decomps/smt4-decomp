#include "common.h"

struct Vec4 {
    f32 x, y, z, w;
};

struct Vec4Slot10 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Vec4 value;
};

extern "C" {

/* Virtual setter: copies a four-float vector into offset 0x10. */
void FUN_002e8154(Vec4Slot10 *self, const Vec4 *value)
{
    self->value = *value;
}

} /* extern "C" */
